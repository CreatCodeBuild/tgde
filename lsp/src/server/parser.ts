import * as path from "path";

declare const WebAssembly: any;
import Parser from 'web-tree-sitter';

export async function GetParser(): Promise<Parser> {
	await Parser.init();
	const parser = new Parser();
	const GSQL = await Parser.Language.load(path.join(__dirname, './tree-sitter-gsql.wasm'));
	parser.setLanguage(GSQL);
	return parser;
}
