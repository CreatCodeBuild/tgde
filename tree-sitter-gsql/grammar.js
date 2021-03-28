/*
GSQL Query Language EBNF
https://docs.tigergraph.com/dev/gsql-ref/querying/appendix-query/complete-formal-syntax-for-query-language
*/
 module.exports = grammar({
    name: 'gsql',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => field('select', $.selectStmt),

        /*
        createQuery := CREATE [OR REPLACE] [DISTRIBUTED] QUERY queryName 
               "(" [parameterList] ")"
               [FOR GRAPH graphName]
               [RETURNS "("  baseType | accumType ")"]
               [API "(" stringLiteral ")"]
               [SYNTAX syntaxName]
               "{" queryBody "}"
        */
        createQuery: $ => seq(
            choice("CREATE", "REPLACE"),
            optional("DISTRIBUTED"),
            "QUERY",
            $.queryName,
        ),

        // queryName := name
        queryName: $ => $.name,

        selectStmt: $ => seq(
            choice("select", "SELECT"),
            $.name,
            choice("from", "FROM"),
            field('step', $.step),
        ),

        // step -> stepSourceSet ["-" "(" stepEdgeSet ")" ("-"|"->") stepVertexSet]
        step: _ => seq(
            _.stepSourceSet,
            optional(
                seq(
                    "-(",
                    field("stepEdgeSet",  _.stepEdgeSet),
                    ")", 
                    choice("-", "->"), 
                    field("stepVertexSet", _.stepVertexSet)
                )
            )
        ),

        stepEdgeSet: _ => _.name,

        stepVertexSet: _ => _.name,

        // stepSourceSet -> vertexSetName [":" vertexAlias]
        stepSourceSet: _ => _.vertexSetName,

        vertexSetName: _ => _.name,

        name: $ => /[a-zA-Z]+/,
    },

    // space, unix line end/LF, windows line end/CRLF
    extras: () => [' ', '\n', '\r\n']
});
