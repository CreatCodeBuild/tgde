build:
	rm -rf dist
	cp ../tree-sitter-gsql/tree-sitter-gsql.wasm src/tree-sitter-gsql.wasm
	$$(npm bin)/tsc -b
	make cp

publish: build
	npm version patch
	make cp
	npm publish dist --access public

cp:
	cp src/tree-sitter-gsql.wasm dist/tree-sitter-gsql.wasm
	cp package.json dist/package.json

p: publish
