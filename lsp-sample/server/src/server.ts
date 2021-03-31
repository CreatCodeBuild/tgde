/* --------------------------------------------------------------------------------------------
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 * ------------------------------------------------------------------------------------------ */
import {
	createConnection,
	TextDocuments,
	Diagnostic,
	DiagnosticSeverity,
	ProposedFeatures,
	InitializeParams,
	DidChangeConfigurationNotification,
	CompletionItem,
	CompletionItemKind,
	TextDocumentPositionParams,
	TextDocumentSyncKind,
	InitializeResult,
	CancellationToken,
	WorkDoneProgressReporter,
	ResultProgressReporter,
	DocumentFormattingRequest,
	DocumentFormattingParams,
	HandlerResult,
	TextEdit,
	HoverParams
} from 'vscode-languageserver/node';

import {
	Position,
	TextDocument
} from 'vscode-languageserver-textdocument';

import * as path from 'path';
// @ts-ignore
import * as common from '../../common/common';
import { keywords } from './keywords';
import { connect } from 'http2';

declare const WebAssembly: any;
const Parser = require('web-tree-sitter');




// Create a connection for the server, using Node's IPC as a transport.
// Also include all preview / proposed LSP features.
let connection = createConnection(ProposedFeatures.all);

// Create a simple text document manager.
let documents: TextDocuments<TextDocument> = new TextDocuments(TextDocument);

let hasConfigurationCapability: boolean = false;
let hasWorkspaceFolderCapability: boolean = false;
let hasDiagnosticRelatedInformationCapability: boolean = false;

connection.onInitialize(async (params: InitializeParams) => {
	console.log('loading parser');
	await Parser.init();
	const parser = new Parser();
	const GSQL = await Parser.Language.load(path.join(__dirname, './tree-sitter-gsql.wasm'));
	parser.setLanguage(GSQL);
	let tree = parser.parse('');	// init the tree

	console.log('done');
	connection.onRequest(common.Request.SemanticHightlight, async (document: string) => {
		tree = parser.parse(document);
		const hightlights = new Map<string, common.HighlightToken>();

		(function f(node) {
			try {
				switch (node.type) {
					case 'name':
					case 'comment':
						const m: common.HighlightToken = {
							type: node.type,
							start: node.startPosition,
							end: node.endPosition
						}
						if (!hightlights.has(node.parent?.id) && !hightlights.has(node.parent?.parent?.id)) {
							hightlights.set(node.id, m)
						}
						break;
				}

				// console.log(node.type)
				if (keywords.includes(node.type.toUpperCase())) {
					const m: common.HighlightToken = {
						type: 'keyword',
						start: node.startPosition,
						end: node.endPosition
					}
					hightlights.set(node.id, m)
				}
				if (node.type.toLowerCase().includes("type")) {
					const m: common.HighlightToken = {
						type: 'type',
						start: node.startPosition,
						end: node.endPosition
					}
					hightlights.set(node.id, m)
				}
				for (let child of node.children) {
					f(child)
				}
			} catch (e) {
				console.log(e)
			}
		}(tree.rootNode))
		return Array.from(hightlights.values());
	});

	let capabilities = params.capabilities;

	// Does the client support the `workspace/configuration` request?
	// If not, we fall back using global settings.
	hasConfigurationCapability = !!(
		capabilities.workspace && !!capabilities.workspace.configuration
	);
	hasWorkspaceFolderCapability = !!(
		capabilities.workspace && !!capabilities.workspace.workspaceFolders
	);
	hasDiagnosticRelatedInformationCapability = !!(
		capabilities.textDocument &&
		capabilities.textDocument.publishDiagnostics &&
		capabilities.textDocument.publishDiagnostics.relatedInformation
	);

	const result: InitializeResult = {
		capabilities: {
			textDocumentSync: TextDocumentSyncKind.Incremental,
			// Tell the client that this server supports code completion.
			completionProvider: {
				resolveProvider: true
			},
			documentFormattingProvider: true
		}
	};
	if (hasWorkspaceFolderCapability) {
		result.capabilities.workspace = {
			workspaceFolders: {
				supported: true
			}
		};
	}
	connection.onRequest(common.Request.Hover, function(p: Position) {
		console.log('hover', p)
		
		const node = tree.rootNode.descendantForPosition({row: p.line, column:p.character})

		return {
			contents: [
				node.type,
				node.parent.type,
				node.parent.parent?.type,
				node.parent.parent?.parent?.type,
				`${JSON.stringify(node.startPosition)}`,
				`${JSON.stringify(node.endPosition)}`,
			]
		};
	});
	return result;
});



connection.onInitialized(() => {
	connection.window.showInformationMessage("hello");

	if (hasConfigurationCapability) {
		// Register for all configuration changes.
		connection.client.register(DidChangeConfigurationNotification.type, undefined);
	}
	if (hasWorkspaceFolderCapability) {
		connection.workspace.onDidChangeWorkspaceFolders(_event => {
			connection.console.log('Workspace folder change event received.');
		});
	}

	connection.client.register
});

// The example settings
interface ExampleSettings {
	maxNumberOfProblems: number;
}

// The global settings, used when the `workspace/configuration` request is not supported by the client.
// Please note that this is not the case when using this server with the client provided in this example
// but could happen with other clients.
const defaultSettings: ExampleSettings = { maxNumberOfProblems: 1000 };
let globalSettings: ExampleSettings = defaultSettings;

// Cache the settings of all open documents
let documentSettings: Map<string, Thenable<ExampleSettings>> = new Map();

connection.onDidChangeConfiguration(change => {
	if (hasConfigurationCapability) {
		// Reset all cached document settings
		documentSettings.clear();
	} else {
		globalSettings = <ExampleSettings>(
			(change.settings.languageServerExample || defaultSettings)
		);
	}

	// Revalidate all open text documents
	// documents.all().forEach(validateTextDocument);
});

function getDocumentSettings(resource: string): Thenable<ExampleSettings> {
	if (!hasConfigurationCapability) {
		return Promise.resolve(globalSettings);
	}
	let result = documentSettings.get(resource);
	if (!result) {
		result = connection.workspace.getConfiguration({
			scopeUri: resource,
			section: 'languageServerExample'
		});
		documentSettings.set(resource, result);
	}
	return result;
}

// Only keep settings for open documents
documents.onDidClose(e => {
	documentSettings.delete(e.document.uri);
});

// The content of a text document has changed. This event is emitted
// when the text document first opened or when its content has changed.
documents.onDidChangeContent(change => {
	console.log('change');
	// validateTextDocument(change.document);
});

connection.onDidChangeWatchedFiles(_change => {
	// Monitored files have change in VSCode
	connection.console.log('We received an file change event');
});

connection.onDocumentFormatting(
	(params: DocumentFormattingParams, token: CancellationToken, workDoneProgress: WorkDoneProgressReporter) => {
		return [{
			range: {
				start: {
					line: 0,
					character: 0
				},
				end: {
					line: 1,
					character: 0
				}
			},
			newText: "x"
		}]
	}
)

// This handler provides the initial list of the completion items.
connection.onCompletion(
	(_textDocumentPosition: TextDocumentPositionParams): CompletionItem[] => {
		// The pass parameter contains the position of the text document in
		// which code complete got requested. For the example we ignore this
		// info and always provide the same completion items.
		return [
			{
				label: 'TypeScript',
				kind: CompletionItemKind.Text,
				data: 1
			},
			{
				label: 'JavaScript',
				kind: CompletionItemKind.Text,
				data: 2
			}
		];
	}
);

// This handler resolves additional information for the item selected in
// the completion list.
connection.onCompletionResolve(
	(item: CompletionItem): CompletionItem => {
		if (item.data === 1) {
			item.detail = 'TypeScript details';
			item.documentation = 'TypeScript documentation';
		} else if (item.data === 2) {
			item.detail = 'JavaScript details';
			item.documentation = 'JavaScript documentation';
		}
		return item;
	}
);

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();
