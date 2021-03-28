module.exports = grammar({
    name: 'gsql',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => field('select', $.selectStmt),

        selectStmt: $ => seq(
            optional(repeat1(" ")),
            choice("select", "SELECT"),
            repeat1(" "),
            $.name,
            repeat1(" "),
            choice("from", "FROM"),
            field('step', $.step),
            optional(repeat1(" ")),
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
    }
});
