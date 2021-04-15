all:
	cd tree-sitter-gsql && make all
	cd gsql-parser && make p
	cd lsp && make package