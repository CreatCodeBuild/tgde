/* --------------------------------------------------------------------------------------------
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 * ------------------------------------------------------------------------------------------ */

// Node
import * as path from 'path';
import util from 'util';
import { exec as _exec, spawn } from 'child_process';
const exec = util.promisify(_exec);


// VS Code
import { workspace, ExtensionContext, languages } from 'vscode';
import * as vscode from 'vscode';

import {
	HoverRequest,
	LanguageClient,
	LanguageClientOptions,
	ServerOptions,
	TransportKind,

} from 'vscode-languageclient/node';

// Third Party
import { sleep } from "@creatcodebuild/csp"

// TigerDE
// @ts-ignore
import * as common from '../common/common';
import { GadminSyncer, parseGadminLogs, parseGadminStatus, Status, tgCMD } from './gadmin';






let client: LanguageClient;
const lang = "gsql";

export function activate(context: ExtensionContext) {
	console.log("extension activates")

	//////////////////////////////
	// Language Server Protocol //
	//////////////////////////////
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
	console.log("registerDocumentSemanticTokensProvider")
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
	console.log("registerHoverProvider")
	vscode.languages.registerHoverProvider(lang, {
		async provideHover(document, position: vscode.Position, token) {
			console.log(position)
			return {
				contents: await client.sendRequest(common.Request.Hover, { row: position.line, column: position.character })
			}
		}
	});

	//////////////////
	// Activity Bar //
	//////////////////
	console.log("registerTreeDataProvider")
	const gadminSyncer = new GadminSyncer(getConfig, 3333);
	const gadminStatusProvideViewID = 'gadminStatus';
	const provider = new gadminStatusProvider(vscode.workspace.rootPath, gadminSyncer);
	(async function refresh() {
		while (true) {
			try {
				await gadminSyncer.statusChanged()
				provider.refresh()
			} catch {
				gadminSyncer.status = []
				await sleep(1000)
				provider.refresh()
			}
		}
	}())
	vscode.window.registerTreeDataProvider(gadminStatusProvideViewID, provider);
	const gadminLogsProvideViewID = 'gadminLogs';
	vscode.window.registerTreeDataProvider(gadminLogsProvideViewID, new gadminLogsProvider(vscode.workspace.rootPath, gadminSyncer));

	// Start the client. This will also launch the server
	client.start();
}

export function deactivate(): Thenable<void> | undefined {
	if (!client) {
		return undefined;
	}
	return client.stop();
}



class gadminStatusProvider implements vscode.TreeDataProvider<any> {
	constructor(
		private workspaceRoot: string | undefined,
		private gadminSyncer: GadminSyncer
	) {
		this.workspaceRoot = workspaceRoot;
		// process.seteuid(1000)
	}

	private _onDidChangeTreeData: vscode.EventEmitter<void> = new vscode.EventEmitter();
	readonly onDidChangeTreeData: vscode.Event<void> = this._onDidChangeTreeData.event;

	refresh(): void {
		this._onDidChangeTreeData.fire();
	}

	getTreeItem(element: Status): vscode.TreeItem {
		console.log('getTreeItem', element)
		let i = new vscode.TreeItem(element.ServiceStatus)
		if (element.ProcessStatus == 'Running') {
			i.iconPath = vscode.Uri.file(path.join(__dirname, "../docs/ok-sign.svg"))
		} else {
			i.iconPath = vscode.Uri.file(path.join(__dirname, "../docs/offline.svg"))
		}
		return i
	}

	async getChildren(element): Promise<Status[]> {
		console.log('gadminStatusProvider.getChildren', element)
		return this.gadminSyncer.status
	}
}

class gadminLogsProvider implements vscode.TreeDataProvider<any> {
	constructor(
		private workspaceRoot: string | undefined,
		private gadminSyncer: GadminSyncer
	) {
		this.workspaceRoot = workspaceRoot;
	}

	getTreeItem(element: string[]): vscode.TreeItem {
		console.log('getTreeItem', element)
		let item = new vscode.TreeItem(vscode.Uri.file(element[1]))
		item.command = {
			// https://code.visualstudio.com/api/references/commands
			command: 'vscode.open',
			title: '',
			arguments: [vscode.Uri.file(element[1])]
		}
		return item
	}

	async getChildren(element) {
		console.log('getChildren', element)
		return this.gadminSyncer.logFiles()
	}
}

function getConfig(config: string) {
	return vscode.workspace.getConfiguration().get(config) as string
}