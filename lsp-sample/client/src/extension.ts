/* --------------------------------------------------------------------------------------------
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 * ------------------------------------------------------------------------------------------ */

import * as path from 'path';
import { workspace, ExtensionContext, languages } from 'vscode';
import * as vscode from 'vscode';

import {
	LanguageClient,
	LanguageClientOptions,
	ServerOptions,
	TransportKind
} from 'vscode-languageclient/node';
// @ts-ignore
import * as common from '../../common/common';

let client: LanguageClient;

export function activate(context: ExtensionContext) {
	console.log("activate")
	// The server is implemented in node
	let serverModule = context.asAbsolutePath(
		path.join('server', 'out', 'server.js')
	);
	// The debug options for the server
	// --inspect=6009: runs the server in Node's Inspector mode so VS Code can attach to the server for debugging
	let debugOptions = { execArgv: ['--nolazy', '--inspect=6009'] };

	// If the extension is launched in debug mode then the debug server options are used
	// Otherwise the run options are used
	let serverOptions: ServerOptions = {
		run: { module: serverModule, transport: TransportKind.ipc },
		debug: {
			module: serverModule,
			transport: TransportKind.ipc,
			options: debugOptions
		}
	};

	// Options to control the language client
	let clientOptions: LanguageClientOptions = {
		// Register the server for plain text documents
		documentSelector: [{ scheme: 'file', language: 'plaintext' }],
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

	const tokenTypes = ['class', 'interface', 'enum', 'function', 'variable'];
	const tokenModifiers = ['declaration', 'documentation'];
	const legend = new vscode.SemanticTokensLegend(tokenTypes, tokenModifiers);

	languages.registerDocumentSemanticTokensProvider(
		'plaintext',
		{
			async provideDocumentSemanticTokens(document: vscode.TextDocument) {
				// analyze the document and return semantic tokens
				let r: Array<common.HighlightToken> = await client.sendRequest(common.Request.SemanticHightlight, document.getText())
				console.log(r)
				
 
				const tokensBuilder = new vscode.SemanticTokensBuilder(legend);
				for(let token of r) {
					// on line 1, characters 1-5 are a class declaration
					tokensBuilder.push(
						new vscode.Range(
							new vscode.Position(token.start.row, token.start.column), 
							new vscode.Position(token.end.row, token.end.column)),
						'variable',
						['declaration']
					);
				}

				return tokensBuilder.build();
			},
		},
		legend
	);

	// Start the client. This will also launch the server
	client.start();
}

export function deactivate(): Thenable<void> | undefined {
	if (!client) {
		return undefined;
	}
	return client.stop();
}
