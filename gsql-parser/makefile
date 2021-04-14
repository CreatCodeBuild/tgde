build:
	rm -rf dist
	cp ../tree-sitter-gsql/tree-sitter-gsql.wasm src/tree-sitter-gsql.wasm
	$$(npm bin)/tsc -b
	cp src/tree-sitter-gsql.wasm dist/tree-sitter-gsql.wasm

publish: build
	npm version patch
	cp package.json dist/package.json
	cp readme.md dist/readme.md
	npm publish dist --access public
	

test:
	node -r ts-node/register src/parser.test.ts

t: test

p: publish
