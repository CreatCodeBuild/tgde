/*
## Select Statement
*/
const { kw, TRUE, FALSE } = require("./index");
module.exports = {
    // selectStmt:= gsqlSelectBlock
    //     | sqlSelectBlock
    selectStmt: $ => choice($.gsqlSelectBlock, /*todo: $.sqlSelectBlock*/),
    /*
    gsqlSelectBlock := gsqlSelectClause
                fromClause
                [sampleClause]
                [whereClause]
                [accumClause]
                [postAccumClause]*
                [havingClause]
                [orderClause]
                [limitClause]
    */
    gsqlSelectBlock: $ => seq(
        $.gsqlSelectClause,
        $.fromClause,
        optional($.whereClause)
        // todo
    ),

    /*
    sqlSelectBlock := sqlSelectClause
            fromClause
            [whereClause]
            [groupByClause]
            [havingClause]
            [orderClause]
            [limitClause]
    */

    // gsqlSelectClause := vertexSetName "=" SELECT vertexAlias
    gsqlSelectClause: $ => seq(
        $.vertexSetName, "=", kw("SELECT"), $.vertexAlias
    ),
    /*
    sqlSelectClause := SELECT [DISTINCT] columnExpr ("," columnExpr)*
                    INTO tableName
    columnExpr := expr [AS columnName]
                | aggregator "("[DISTINCT] expr ")" [AS columnName]
    columnName := name
    */
    // tableName := name
    tableName: $=> $.name,

    // fromClause := FROM (step | stepV2 | pathPattern ["," pathPattern]*)
    fromClause: $ => seq(
        kw("from"), choice($.step, $.stepV2 , seq($.pathPattern, optional(repeat(seq(",", $.pathPattern)))))
    ),


    // step :=  stepSourceSet ["-" "(" stepEdgeSet ")" ("-"|"->") stepVertexSet]
    step: _ => seq(
        _.stepSourceSet,
        optional(seq(
            "-", "(", _.stepEdgeSet, ")", choice("-", "->"), _.stepVertexSet
        ))
    ),

    // stepV2 :=  stepVertexSet ["-" "(" stepEdgeSet ")" "-" stepVertexSet]
    stepV2: $ => seq(
        $.stepVertexSet, optional(seq("-", "(", $.stepEdgeSet, ")", "-", $.stepVertexSet))
    ),
    

    // stepSourceSet := vertexSetName [":" vertexAlias]
    stepSourceSet: $ => seq($.vertexSetName, optional(seq(":", $.vertexAlias))),
    // stepEdgeSet := [stepEdgeTypes] [":" edgeAlias]
    stepEdgeSet: $ => choice($.stepEdgeTypes, seq(":", $.edgeAlias)),
    // stepVertexSet := [stepVertexTypes] [":" vertexAlias]
    stepVertexSet: $ => choice($.stepVertexTypes, seq(":", $.vertexAlias)),
    // alias := (vertexAlias | edgeAlias)
    alias: $ => choice($.vertexAlias, $.edgeAlias),


    

    

    // stepSourceSet -> vertexSetName [":" vertexAlias]
    

    // vertexAlias := name
    // edgeAlias := name
    vertexAlias: $ => $.name,
    edgeAlias: $ => $.name,


    // stepEdgeTypes := atomicEdgeType | "(" edgeSetType ["|" edgeSetType]* ")"      
    stepEdgeTypes: $ => choice(
        $.atomicEdgeType,
        seq("(", $.edgeSetType, repeat(seq("|", $.edgeSetType)))
    ),         
    // atomicEdgeType := "_" | ANY | edgeSetType
    // edgeSetType := edgeType | paramName | globalAccumName
    atomicEdgeType: $ => choice("_", kw("ANY"), $.edgeSetType),
    edgeSetType: $ => choice($.edgeType, $.paramName, $.globalAccumName),

    // stepVertexTypes := atomicVertexType | "(" vertexSetType ["|" vertexSetType]* ")"
    stepVertexTypes: $ => choice(
        $.atomicVertexType,
        seq("(", $.vertexSetType, repeat(seq("|", $.vertexSetType)))
    ),         
    // atomicVertexType := "_" | ANY | vertexSetType
    atomicVertexType: $ => choice("_", kw("ANY"), $.vertexSetType),
    // vertexSetType := vertexType | paramName | globalAccumName
    vertexSetType: $ => choice($.vertexType, $.paramName, $.globalAccumName),
    
}