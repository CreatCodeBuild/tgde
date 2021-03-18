const Parser = require('web-tree-sitter');

(async() => {
    await Parser.init();
    const parser = new Parser();
    const GSQL = await Parser.Language.load('./tree-sitter-gsql.wasm');
    parser.setLanguage(GSQL);
    
    const sourceCode = 'select tgt from Start:s-(friendship:e) ->person:tgt;';
    const tree = parser.parse(sourceCode);
    console.log(tree.rootNode);
})();

