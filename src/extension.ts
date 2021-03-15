// The module 'vscode' contains the VS Code extensibility API
// Import the module and reference it with the alias vscode in your code below
import * as vscode from 'vscode';
import fetch from "node-fetch";
import * as schema from "./schema";
import { chan, UnbufferredChannel } from "./csp";
import grammar from "./grammar";
import * as nearley from "nearley";

// this method is called when your extension is activated
// your extension is activated the very first time the command is executed
export function activate(context: vscode.ExtensionContext) {

	// Use the console to output diagnostic information (console.log) and errors (console.error)
	// This line of code will only be executed once when your extension is activated
	console.log('Congratulations, your extension "tgde" is now active!');

	const parser = new nearley.Parser(nearley.Grammar.fromCompiled(grammar));

	let schema: schema.Schema;

	// Get Schema Information
	fetch("http://3.92.64.253:14240/gsqlserver/gsql/schema", {
		headers: {
			"Authorization": "Basic dGlnZXJncmFwaDp0aWdlcmdyYXBo"
		}
	}).then(async (res) => {
		let s : schema.RootObject = await res.json()
		console.log(s.results)
		schema = s.results;
	})

	const provider1 = vscode.languages.registerCompletionItemProvider('gsql', {

		provideCompletionItems(document: vscode.TextDocument, position: vscode.Position, token: vscode.CancellationToken, context: vscode.CompletionContext) {

			// a simple completion item which inserts `Hello World!`
			const simpleCompletion = new vscode.CompletionItem('Hello World!');

			// a completion item that inserts its text as snippet,
			// the `insertText`-property is a `SnippetString` which will be
			// honored by the editor.
			const snippetCompletion = new vscode.CompletionItem('Good part of the day');
			snippetCompletion.insertText = new vscode.SnippetString('Good ${1|morning,afternoon,evening|}. It is ${1}, right?');
			snippetCompletion.documentation = new vscode.MarkdownString("Inserts a snippet that lets you select the _appropriate_ part of the day for your greeting.");

			// a completion item that can be accepted by a commit character,
			// the `commitCharacters`-property is set which means that the completion will
			// be inserted and then the character will be typed.
			const commitCharacterCompletion = new vscode.CompletionItem('console');
			commitCharacterCompletion.commitCharacters = ['.'];
			commitCharacterCompletion.documentation = new vscode.MarkdownString('Press `.` to get `console.`');

			// a completion item that retriggers IntelliSense when being accepted,
			// the `command`-property is set which the editor will execute after 
			// completion has been inserted. Also, the `insertText` is set so that 
			// a space is inserted after `new`
			const commandCompletion = new vscode.CompletionItem('new');
			commandCompletion.kind = vscode.CompletionItemKind.Keyword;
			commandCompletion.insertText = 'new ';
			commandCompletion.command = { command: 'editor.action.triggerSuggest', title: 'Re-trigger completions...' };

			// return all completion items as array
			return [
				simpleCompletion,
				snippetCompletion,
				commitCharacterCompletion,
				commandCompletion
			];
		}
	});

	const provider2 = vscode.languages.registerCompletionItemProvider(
		'gsql',
		{
			provideCompletionItems(document: vscode.TextDocument, position: vscode.Position) {

				// get all text until the `position` and check if it reads `console.`
				// and if so then complete if `log`, `warn`, and `error`
				const linePrefix = document.lineAt(position).text.substr(0, position.character);
				if (!linePrefix.endsWith('console.')) {
					return undefined;
				}

				return [
					new vscode.CompletionItem('log', vscode.CompletionItemKind.Method),
					new vscode.CompletionItem('warn', vscode.CompletionItemKind.Method),
					new vscode.CompletionItem('error', vscode.CompletionItemKind.Method),
				];
			}
		},
		'.' // triggered whenever a '.' is being typed
	);

	vscode.languages.registerHoverProvider("gsql", {
		provideHover(document: vscode.TextDocument, position: vscode.Position, token: vscode.CancellationToken): vscode.ProviderResult<vscode.Hover> {
			console.log("hover");
			let w = word(document, position)
			parser.feed(document.getText())
			console.log(parser.results);

			for(let v of schema.VertexTypes) {
				if(v.Name === w.toLowerCase()) {
					console.log(v)
					document.getWordRangeAtPosition
					console.log(position)
					console.log(schema)
					const markdown = new vscode.MarkdownString();
					markdown.appendMarkdown(`#### Vertex: ${v.Name}\n`);
					for(let attr of v.Attributes) {
						markdown.appendMarkdown(`${attr.AttributeName}: ${attr.AttributeType.Name}\n\n`)
					}
					
					return new vscode.Hover(markdown)
				}
			}
			return undefined;
		}
	})

	context.subscriptions.push(provider1, provider2);
}

// this method is called when your extension is deactivated
export function deactivate() {}

function word(document: vscode.TextDocument, position: vscode.Position): string {
	let range = document.getWordRangeAtPosition(position)
	if(!range) { return "" } 
	return document.getText().slice(document.offsetAt(range.start), document.offsetAt(range.end))
}
