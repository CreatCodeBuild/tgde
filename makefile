gen:
	cd tree-sitter-gsql && ./node_modules/.bin/tree-sitter generate

parse:
	cd tree-sitter-gsql && ./node_modules/.bin/tree-sitter parse source.gsql

pg: gen parse