install:
	npm install

build:
	rm -rf dist
	$$(npm bin)/tsc -b
	cp ../tree-sitter-gsql/tree-sitter-gsql.wasm src/tree-sitter-gsql.wasm
	cp src/tree-sitter-gsql.wasm dist/tree-sitter-gsql.wasm

publish: build
	npm version patch
	cp package.json dist/package.json
	cp readme.md dist/readme.md
	npm publish dist --access public
	
test:
	$$(npm bin)/mocha -r ts-node/register src/parser.test.ts

i: install

b: build

t: test

p: publish
