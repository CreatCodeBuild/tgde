/* --------------------------------------------------------------------------------------------
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 * ------------------------------------------------------------------------------------------ */

import * as path from 'path';
import { workspace, ExtensionContext, languages } from 'vscode';
import * as vscode from 'vscode';

import {
	HoverRequest,
	LanguageClient,
	LanguageClientOptions,
	ServerOptions,
	TransportKind
} from 'vscode-languageclient/node';
// @ts-ignore
import * as common from '../common/common';

let client: LanguageClient;
const lang = "gsql";

export function activate(context: ExtensionContext) {
	console.log("activate")
	// The server is implemented in node
	let serverModule = path.join(__dirname, '../server/server.js')
	// The debug options for the server
	// --inspect=6009: runs the server in Node's Inspector mode so VS Code can attach to the server for debugging
	let debugOptions = { execArgv: ['--nolazy', '--inspect=6009'] };

	// If the extension is launched in debug mode then the debug server options are used
	// Otherwise the run options are used
	let serverOptions: ServerOptions = {
		run: { module: serverModule, transport: TransportKind.ipc },
		debug: { module: serverModule, transport: TransportKind.ipc, options: debugOptions }
	};

	// Options to control the language client
	let clientOptions: LanguageClientOptions = {
		// Register the server for plain text documents
		documentSelector: [{ scheme: 'file', language: lang }],
		synchronize: {
			// Notify the server about file changes to '.clientrc files contained in the workspace
			fileEvents: workspace.createFileSystemWatcher('**/.clientrc')
		}
	};

	// Create the language client and start the client.
	client = new LanguageClient(
		'languageServerExample',
		'Language Server Example',
		serverOptions,
		clientOptions
	);

	// DocumentSemanticTokensProvider
	const tokenTypes = ['class', 'interface', 'enum', 'function', 'variable', 'comment', 'keyword', 'type'];
	const tokenModifiers = ['declaration', 'documentation'];
	const legend = new vscode.SemanticTokensLegend(tokenTypes, tokenModifiers);
	languages.registerDocumentSemanticTokensProvider(
		[lang],
		{
			async provideDocumentSemanticTokens(document: vscode.TextDocument) {
				// analyze the document and return semantic tokens
				// todo: refactor to GraphQL
				let r: Array<common.HighlightToken> = await client.sendRequest(common.Request.SemanticHightlight, document.getText())
				console.log(r)

				function tsTokenToVS(token: common.HighlightToken) {
					return new vscode.Range(
						new vscode.Position(token.start.row, token.start.column),
						new vscode.Position(token.end.row, token.end.column))
				}
				function pushToBuilder(tokensBuilder: vscode.SemanticTokensBuilder, token: common.HighlightToken, tokenType, tokenModifiers?) {
					try {
						tokensBuilder.push(tsTokenToVS(token), tokenType, tokenModifiers);
					} catch (e) {
						console.log(e)
					}
				}
				const tokensBuilder = new vscode.SemanticTokensBuilder(legend);
				try {
					for (let token of r) {
						console.log(token)
						if (token.type === 'name') {
							pushToBuilder(tokensBuilder, token, 'variable')
						} else if (token.type === 'comment') {
							pushToBuilder(tokensBuilder, token, 'comment')
						} else if (token.type === 'keyword') {
							pushToBuilder(tokensBuilder, token, 'keyword')
						}
						if (token.type === 'type') {
							pushToBuilder(tokensBuilder, token, 'function')
						}
					}

				} catch (e) {
					console.log(e)
				}

				const semanticTokens = tokensBuilder.build();
				console.log(semanticTokens)
				return semanticTokens;
			},
		},
		legend
	);

	// HoverProvider
	vscode.languages.registerHoverProvider(lang, {
		async provideHover(document, position: vscode.Position, token) {
			console.log(position)
			return {
				contents: await client.sendRequest(common.Request.GQL, {row: position.line, column: position.character})
			}
		}
	});

	// Start the client. This will also launch the server
	client.start();
}

export function deactivate(): Thenable<void> | undefined {
	if (!client) {
		return undefined;
	}
	return client.stop();
}
