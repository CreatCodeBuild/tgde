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
import * as common from '../common/common';
import { keywords } from '../common/keywords';
import { serve } from './graphql';
import { GetParser } from './parser';
import Parser from 'web-tree-sitter';
import { NewSemanticHightlightHandler } from './request-handlers';

// Create a connection for the server, using Node's IPC as a transport.
// Also include all preview / proposed LSP features.
let connection = createConnection(ProposedFeatures.all);

// Create a simple text document manager.
let documents: TextDocuments<TextDocument> = new TextDocuments(TextDocument);

let hasConfigurationCapability: boolean = false;
let hasWorkspaceFolderCapability: boolean = false;
let hasDiagnosticRelatedInformationCapability: boolean = false;
let parser: Parser;

connection.onInitialize(async (params: InitializeParams) => {
	console.log('loading parser');
	parser = await GetParser();
	let tree = parser.parse('');	// init the tree
	console.log('done');

	connection.onRequest(common.Request.SemanticHightlight, NewSemanticHightlightHandler(parser));

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

	connection.onRequest(common.Request.GQL, async function(query: string, args: any) {
		try {
			return await serve(query, tree);
		} catch (e) {
			console.log(e)
		}
	})
	return result;
});



connection.onInitialized(() => {
	connection.window.showInformationMessage("hello");

	if (hasConfigurationCapability) {
		// Register for all configuration changes.
		connection.client.register(DidChangeConfigurationNotification.type, undefined);
	}
	if (hasWorkspaceFolderCapability) {
		connection.workspace.onDidChangeWorkspaceFolders((_event: any) => {
			connection.console.log('Workspace folder change event received.');
		});
	}

	connection.client.register
});


// The content of a text document has changed. This event is emitted
// when the text document first opened or when its content has changed.
documents.onDidChangeContent((change: any) => {
	console.log('change');
});

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();
