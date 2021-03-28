module.exports = grammar({
    name: 'gsql',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => field('select', $.selectStmt),

        selectStmt: $ => seq(
            optional($.whitespace),
            choice("select", "SELECT"),
            $.whitespace,
            $.name,
            $.whitespace,
            choice("from", "FROM"),
            field('step', $.step),
            optional($.whitespace),
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

        whitespace: _ => repeat1(choice(" ", "\n"))
    }
});
