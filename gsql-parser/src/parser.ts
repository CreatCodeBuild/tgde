import * as path from "path";

declare const WebAssembly: any;
import Parser, { Point } from 'web-tree-sitter';

export interface HighlightToken {
	start: Point
	end: Point
	type: TokenType
}

export type TokenType = "type" | "name" | "comment" | "keyword";

/**
 * A stateful parser that kepts the syntax tree of last parsing operation.
 */
export class GSQLParser {

	static async New(wasmURL?: string) {
		wasmURL = wasmURL? wasmURL : path.join(__dirname, './tree-sitter-gsql.wasm')
		await Parser.init();
		const parser = new Parser();
		const GSQL = await Parser.Language.load(wasmURL);
		parser.setLanguage(GSQL);
		return new GSQLParser(parser, parser.parse(''));
	}

	// https://dev.to/satansdeer/typescript-constructor-shorthand-3ibd
	private constructor(
		public parser: Parser,
		public tree: Parser.Tree
	) { }

	hover(position: Point, document?: string): (string|undefined)[] {
		const node = this.tree.rootNode.descendantForPosition(position)
		return [
			node.type,
			node.parent?.type,
			node.parent?.parent?.type,
			node.parent?.parent?.parent?.type,
			node.parent?.parent?.parent?.parent?.type,
			node.parent?.parent?.parent?.parent?.parent?.type,
			node.parent?.parent?.parent?.parent?.parent?.parent?.type,
			`${JSON.stringify(node.startPosition)}`,
			`${JSON.stringify(node.endPosition)}`,
			node.type === 'ERROR'? node.text: '',
		]
	}

	/**
	 * Given a source code string, return a list of tokens with corresponding types
	 * that can be used for syntax highlighting.
	 * UI should be handled by the caller.
	 */
	highlight(document: string): Array<HighlightToken> {
		this.tree = this.parser.parse(document);
		const hightlights = new Map<number, HighlightToken>();

		(function f(node) {
			try {
				switch (node.type) {
					case 'name':
					case 'comment':
						const m: HighlightToken = {
							type: node.type,
							start: node.startPosition,
							end: node.endPosition
						}
						// @ts-ignore
						if (!hightlights.has(node.parent?.id) && !hightlights.has(node.parent?.parent?.id)) {
							hightlights.set(node.id, m)
						}
						break;
				}

				if (keywords.includes(node.type.toUpperCase())) {
					const m: HighlightToken = {
						type: 'keyword',
						start: node.startPosition,
						end: node.endPosition
					}
					hightlights.set(node.id, m)
				}
				if (node.type.toLowerCase().includes("type")) {
					const m: HighlightToken = {
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
		}(this.tree.rootNode))
		return Array.from(hightlights.values());
	}
}


export const keywords = [
	"ACCUM", "AND", "ANY", "API", "AS", "ASC", "AVG",
	"BAG", "BATCH", "BETWEEN", "BOOL", "BOTH", "BREAK", "BY", "CASE", "CATCH", "COALESCE",
	"COMPRESS", "CONTINUE", "COUNT", "CREATE",
	"DATETIME", "DATETIME_ADD", "DATETIME_SUB", "DELETE", "DESC", "DISTRIBUTED", "DO", "DOUBLE",
	"EDGE", "ELSE", "END", "ESCAPE", "EXCEPTION",
	"FALSE", "FILE", "FILTER", "FLOAT", "FOR", "FOREACH", "FROM",
	"GRAPH", "GROUP", "GSQL_INT_MAX", "GSQL_INT_MIN", "GSQL_UINT_MAX",
	"HAVING",
	"IF", "IN", "INSERT", "INT", "INTERPRET", "INTERSECT", "INTERVAL", "INTO", "IS", "ISEMPTY",
	"JSONARRAY", "JSONOBJECT",
	"LASTHOP", "LEADING", "LIKE", "LIMIT", "LIST", "LOAD_ACCUM", "LOG",
	"MAP", "MATCH", "MAX", "MIN", "MINUS",
	"NOT", "NOW", "NULL",
	"OFFSET", "OR", "ORDER",
	"PATH", "PER", "PINNED", "POST_ACCUM", "POST-ACCUM", "PRIMARY_ID", "PRINT",
	"QUERY",
	"RAISE", "RANGE", "REPLACE", "RESET_COLLECTION_ACCUM", "RETURN", "RETURNS", "RUN",
	"SAMPLE", "SELECT", "SELECT_VERTEX", "SET", "SRC", "STATIC", "STRING", "SUM", "SYNTAX",
	"TARGET", "TAGS", "TGT", "THEN", "TO", "TO_CSV", "TO_DATETIME", "TRAILING", "TRIM", "TRUE", "TRY", "TUPLE", "TYPEDEF",
	"UINT", "UNION", "UPDATE",
	"VALUES", "VERTEX",
	"WHEN", "WHERE", "WHILE", "WITH"
]
