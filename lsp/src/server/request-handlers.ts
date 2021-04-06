import * as common from '../common/common';
import { SemanticHightlightHandler } from '../common/common';
import { keywords } from '../common/keywords';
import Parser from 'web-tree-sitter';

interface Putter {
	put(tree: Parser.Tree)
}

export function NewSemanticHightlightHandler(parser: Parser, treeStateSub: Putter): SemanticHightlightHandler {
	return async function onSemanticHighlighting(document: string) {
		let tree = parser.parse(document);
		treeStateSub.put(tree);	// caller scope subscribes the current tree state.
		const hightlights = new Map<number, common.HighlightToken>();
	
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
	}
}
