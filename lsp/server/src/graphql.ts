import { graphql, buildSchema } from 'graphql';
import { readFileSync } from 'fs';
import * as gql from './gql';
import { join } from 'path';

const schema = buildSchema(readFileSync(join(__dirname, './server.gql')).toString());

type gsqlTree = any;	// todo

class Root {
	tree: gsqlTree
	constructor(tree: gsqlTree) {
		this.tree = tree;
	}

	SemanticHightlight() {
		'Hello world!'
	}
	Hover(args: gql.Position) {

		const node = this.tree.rootNode.descendantForPosition({ row: args.line, column: args.character })
		console.log(args, this.tree, node)
		return [
			node.type,
			node.parent?.type,
			node.parent?.parent?.type,
			node.parent?.parent?.parent?.type,
			`${JSON.stringify(node.startPosition)}`,
			`${JSON.stringify(node.endPosition)}`,
		]
	}
};

export async function serve(query: string, tree: gsqlTree) {
	let r = await graphql(schema, query, new Root(tree))
	console.log(r)
	return r
}