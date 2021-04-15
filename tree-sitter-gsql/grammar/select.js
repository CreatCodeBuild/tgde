/*
#########################################################
## Select Statement
 
selectStmt  := gsqlSelectBlock
             | sqlSelectBlock
 
gsqlSelectBlock := gsqlSelectClause
               fromClause
               [sampleClause]
               [whereClause]
               [accumClause]
               [postAccumClause]*
               [havingClause]
               [orderClause]
               [limitClause]
                    
sqlSelectBlock := sqlSelectClause
               fromClause
               [whereClause]
               [groupByClause]
               [havingClause]
               [orderClause]
               [limitClause]
               
gsqlSelectClause := vertexSetName "=" SELECT vertexAlias
sqlSelectClause := SELECT [DISTINCT] columnExpr ("," columnExpr)*
                   INTO tableName
columnExpr := expr [AS columnName]
            | aggregator "("[DISTINCT] expr ")" [AS columnName]
columnName := name
tableName := name

fromClause := FROM (step | stepV2 | pathPattern ["," pathPattern]*)

step   :=  stepSourceSet ["-" "(" stepEdgeSet ")" ("-"|"->") stepVertexSet]
stepV2 :=  stepVertexSet ["-" "(" stepEdgeSet ")" "-" stepVertexSet]
 
stepSourceSet := vertexSetName [":" vertexAlias]
stepEdgeSet := [stepEdgeTypes] [":" edgeAlias]
stepVertexSet := [stepVertexTypes] [":" vertexAlias]
alias := (vertexAlias | edgeAlias)
vertexAlias := name
edgeAlias := name

stepEdgeTypes := atomicEdgeType | "(" edgeSetType ["|" edgeSetType]* ")"               
atomicEdgeType := "_" | ANY | edgeSetType
edgeSetType := edgeType | paramName | globalAccumName

stepVertexTypes := atomicVertexType | "(" vertexSetType ["|" vertexSetType]* ")"
atomicVertexType := "_" | ANY | vertexSetType
vertexSetType := vertexType | paramName | globalAccumName
*/

/*
#----------# Pattern Matching #----------#
pathPattern :=  stepVertexSet ["-" "(" pathEdgePattern ")" "-" stepVertexSet]*

pathEdgePattern := atomicEdgePattern
                 | "(" pathEdgePattern ")"
                 | pathEdgePattern "." pathEdgePattern
                 | disjPattern
                 | starPattern
                 
atomicEdgePattern  := atomicEdgeType		
                    | atomicEdgeType ">"	
                    | "<" atomicEdgeType	
               
disjPattern := atomicEdgePattern ("|" atomicEdgePattern)*

starPattern := ([atomicEdgePattern] | "(" disjPattern ")") "*" [starBounds]

starBounds := CONST_INT ".." CONST_INT 
            | CONST_INT ".." 
            | ".." CONST_INT 
            | CONST_INT 
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
        optional($.whereClause),
        optional($.accumClause)
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
    tableName: $ => $.name,

    // fromClause := FROM (step | stepV2 | pathPattern ["," pathPattern]*)
    fromClause: $ => seq(
        kw("from"), choice($.step, $.stepV2, seq($.pathPattern, optional(repeat(seq(",", $.pathPattern)))))
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
    stepEdgeSet: $ => choice(
        $.stepEdgeTypes,
        seq(":", $.edgeAlias),
        seq($.stepEdgeTypes, seq(":", $.edgeAlias))
    ),
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
    vertexSetType: $ => token.immediate(choice($.vertexType, $.paramName, $.globalAccumName)),


    /*
    #--------------------------------------#
    
    sampleClause := SAMPLE ( expr | expr "%" ) EDGE WHEN condition
                  | SAMPLE expr TARGET WHEN condition
                  | SAMPLE expr "%" TARGET PINNED WHEN condition
     
    postAccumClause := "POST-ACCUM" dmlSubStmtList
    
    
    vAccumFuncCall := vertexAlias "." localAccumName ("." funcName "(" [argList] ")")+
    
    groupByClause := GROUP BY groupExpr ("," groupExpr)*
    groupExpr := expr
    
    havingClause := HAVING condition
     
    orderClause := ORDER BY expr [ASC | DESC] ["," expr [ASC | DESC]]*
     
    limitClause := LIMIT ( expr | expr "," expr | expr OFFSET expr )
    */

    // whereClause := WHERE condition
    whereClause: $ => seq(
        "WHERE", $.condition
    ),

    // accumClause := [perClauseV2] ACCUM dmlSubStmtList
    accumClause: $ => seq(
        $.perClauseV2,
        kw("ACCUM"),
        $.dmlSubStmtList,
    ),

    // perClauseV2 := PER "(" alias ["," alias] ")"
    perClauseV2: $ => seq(
        kw("PER"),
        "(",
        $.alias,
        repeat(seq(",", $.alias)),
        ")"
    ),


    // dmlSubStmtList := dmlSubStmt ["," dmlSubStmt]*
    dmlSubStmtList: $ => seq(
        $.dmlSubStmt,
        repeat(seq(",", $.dmlSubStmt))
    ),

    // dmlSubStmt := assignStmt           // Assignment   
    //             | funcCallStmt         // Function Call  
    //             | gAccumAccumStmt      // Assignment
    //             | lAccumAccumStmt      // Assignment
    //             | attrAccumStmt        // Assignment
    //             | vAccumFuncCall       // Function Call
    //             | localVarDeclStmt     // Declaration
    //             | dmlSubCaseStmt       // Control Flow
    //             | dmlSubIfStmt         // Control Flow
    //             | dmlSubWhileStmt      // Control Flow
    //             | dmlSubForEachStmt    // Control Flow
    //             | BREAK                // Control Flow
    //             | CONTINUE             // Control Flow
    //             | insertStmt           // Data Modification
    //             | dmlSubDeleteStmt     // Data Modification
    //             | printlnStmt          // Output
    //             | logStmt              // Output
    dmlSubStmt: $ => choice(
        $.assignStmt
        // todo
    )
}
