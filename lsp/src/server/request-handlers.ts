import { SemanticHightlightHandler } from '../common/common';

import Parser from 'web-tree-sitter';
// @ts-ignore
import { GSQLParser } from 'gsql-parser';

interface Putter {
	put(tree: Parser.Tree)
}

export function NewSemanticHightlightHandler(parser: GSQLParser): SemanticHightlightHandler {
	return function onSemanticHighlighting(document: string) {
		return Array.from(parser.highlight(document));
	}
}
