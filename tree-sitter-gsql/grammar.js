module.exports = grammar({
    name: 'gsql',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => $.selectStmt,

        selectStmt: $ => seq(
            optional(repeat1(" ")),
            choice("select", "SELECT"),
            repeat1(" "),
            $.name,
            repeat1(" "),
            choice("from", "FROM"),
            $.step,
            optional(repeat1(" ")),
        ),

        // step -> stepSourceSet ["-" "(" stepEdgeSet ")" ("-"|"->") stepVertexSet]
        step: _ => seq(
            _.stepSourceSet
        ),

        // stepSourceSet -> vertexSetName [":" vertexAlias]
        stepSourceSet: _ => _.vertexSetName,

        vertexSetName: _ => _.name,

        name: $ => /[a-zA-Z]+/,
    }
});
