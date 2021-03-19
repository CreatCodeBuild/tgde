// The module 'vscode' contains the VS Code extensibility API
// Import the module and reference it with the alias vscode in your code below
import * as vscode from 'vscode';
// @ts-ignore
const Parser = require('web-tree-sitter');

// this method is called when your extension is activated
// your extension is activated the very first time the command is executed
export function activate(context: vscode.ExtensionContext) {

	// Use the console to output diagnostic information (console.log) and errors (console.error)
	// This line of code will only be executed once when your extension is activated
	console.log('Congratulations, your extension "tgde" is now active!');

	// The command has been defined in the package.json file
	// Now provide the implementation of the command with registerCommand
	// The commandId parameter must match the command field in package.json
	let disposable = vscode.commands.registerCommand('tgde.helloWorld', async () => {
		// The code you place here will be executed every time your command is executed

		// Display a message box to the user
		await Parser.init();
		const parser = new Parser();
		// console.log(__dirname)
		const GSQL = await Parser.Language.load('./tree-sitter-gsql.wasm');
		// parser.setLanguage(GSQL);
		
		// const sourceCode = 'select tgt from Start:s-(friendship:e) ->person:tgt;';
		// const tree = parser.parse(sourceCode);
		// console.log(tree.rootNode.toString());
		vscode.window.showInformationMessage('Hello World from', __dirname);
	});

	context.subscriptions.push(disposable);
}

// this method is called when your extension is deactivated
export function deactivate() {}
