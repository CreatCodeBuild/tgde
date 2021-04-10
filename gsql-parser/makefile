build:
	rm -rf dist
	cp ../tree-sitter-gsql/tree-sitter-gsql.wasm src/tree-sitter-gsql.wasm
	$$(npm bin)/tsc -b
	make cp

publish:
	npm version patch
	make cp
	npm publish dist --access public

cp:	
	cp package.json dist/package.json

p: publish
