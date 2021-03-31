/*
GSQL Query Language EBNF
https://docs.tigergraph.com/dev/gsql-ref/querying/appendix-query/complete-formal-syntax-for-query-language
*/

const { kw } = require("./grammar/index");

const g = {
    name: 'gsql',

    // https://tree-sitter.github.io/tree-sitter/creating-parsers
    extras: $ => [
        // space, tab, unix line end/LF, windows line end/CRLF
        ' ', '\t', '\n', '\r\n',
        // comments
        $.comment,
    ],

    conflicts: $ => [
        [$.vertexSetName, $.stepVertexSet],
        [$.vertexSetName, $.assignStmt],
        [$.name],
        [$.expr],
        [$.condition],
        [$.baseType, $.accumType],
    ],

    rules: {
        source_file: $ => repeat1(
            choice(
                $.createQuery,
                $.selectStmt
            )
        ),

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
            kw("create"), optional(seq(kw("OR"), kw("REPLACE"))), optional(kw("DISTRIBUTED")), "QUERY", $.queryName,
            "(", optional($.parameterList), ")",
            optional(seq("FOR", "GRAPH", $.graphName)),
            optional(seq("RETURNS", "(", choice($.baseType, $.accumType), ")")),
            optional(seq("RETURNS", "(", choice($.baseType, $.accumType), ")")),
            optional(seq("SYNTAX", $.syntaxName)),
            "{", $.queryBody, "}"
        ),

        /*
        parameterList := parameterType paramName ["=" constant]
                 ["," parameterType paramName  ["=" constant]]*
        */
        parameterList: $ => seq(
            $.parameterType, $.paramName, optional(seq("=", $.constant)),
            repeat(seq(",", $.parameterType, $.paramName, optional(seq("=", $.constant))))
        ),

        syntaxName: $ => $.name,

        queryBody: $ => seq(
            optional($.typedefs) , optional($.declStmts), /* todo optional($.declExceptiStmts) ,*/
            $.queryBodyStmts,
        ),


        typedefs: $ => repeat1(seq($.typedef, ";")),

        typedef: $ => seq(kw("TYPEDEF"), kw("TUPLE"), "<", $.tupleFields, ">", $.tupleType),

        // tupleFields := (baseType fieldName) | (fieldName baseType)
        //                ["," (baseType fieldName) | (fieldName baseType)]*
        tupleFields: $ => seq(
            choice(seq($.baseType, $.fieldName), seq($.fieldName, $.baseType)),
            optional(repeat(seq(",", choice(seq($.baseType, $.fieldName), seq($.fieldName, $.baseType)))))
        ),

        declStmts: $ => repeat1(seq($.declStmt, ";")),

        // declStmt := baseDeclStmt | accumDeclStmt | fileDeclStmt
        declStmt: $ => choice(/* $.baseDeclStmt,*/ $.accumDeclStmt, /*$.fileDeclStmt*/),

        declExceptiStmts: $ => "  ",

        queryBodyStmts: $ => repeat1(seq($.queryBodyStmt, ";")),

        /*
        queryBodyStmt := assignStmt           // Assignment
               | vSetVarDeclStmt      // Declaration
               | lAccumAssignStmt     // Assignment
               | gAccumAssignStmt     // Assignment
               | gAccumAccumStmt      // Assignment
               | funcCallStmt         // Function Call
               | selectStmt           // Select 
               | queryBodyCaseStmt    // Control Flow
               | queryBodyIfStmt      // Control Flow
               | queryBodyWhileStmt   // Control Flow
               | queryBodyForEachStmt // Control Flow
               | BREAK                // Control Flow
               | CONTINUE             // Control Flow
               | updateStmt           // Data Modification
               | insertStmt           // Data Modification
               | queryBodyDeleteStmt  // Data Modification
               | printStmt            // Output
               | printlnStmt          // Output
               | logStmt              // Output
               | returnStmt           // Output
               | raiseStmt            // Exception
               | tryStmt              // Exception
        */
        // todo
        queryBodyStmt: $ => choice(
            /* $.assignStmt, */
            $.selectStmt
        ),

        /*
        #########################################################
        ## Types and names
        lowercase          := [a-z]
        uppercase          := [A-Z]
        letter             := lowercase | uppercase
        */

        /*
        digit              := [0-9]
        integer            := ["-"]digit+
        real               := ["-"]("."digit+) | ["-"](digit+"."digit*)
        numeric            := integer | real
        */
        integer: $ => seq(optional("-"), repeat1(digit())),
        real: $ => choice(
            seq(optional("-"), ".", repeat1(digit())),
            seq(optional("-"), repeat1(digit()), ".", repeat(digit()))
        ),
        numeric: $ => choice($.integer, $.real),

        /*
        stringLiteral      := '"' [~["] | '\\' ('"' | '\\')]* '"'
        */

        /*
        name := (letter | "_") [letter | digit | "_"]*   // can be a single "_" or start with "_"
        */
        name: $ => seq(
            choice(letter(), "_"),
            repeat(choice(letter(), digit(), "_"))
        ),
        graphName: $ => $.name,
        queryName: $ => $.name,
        paramName: $ => $.name,
        vertexType: $ => $.name,
        edgeType: $ => $.name,
        accumName: $ => $.name,
        vertexSetName: $ => $.name,
        attrName: $ => $.name,
        varName: $ => $.name,
        tupleType: $ => $.name,
        fieldName: $ => $.name,
        funcName: $ => $.name,

        /*
        baseType := INT
          | UINT
          | FLOAT
          | DOUBLE
          | STRING
          | BOOL
          | VERTEX ["<" vertexType ">"]
          | EDGE
          | JSONOBJECT
          | JSONARRAY
          | DATETIME
        */
        baseType: $ => choice(
            kw("INT"),
            kw("FLOAT"),
            kw("DOUBLE"),
            kw("STRING"),
            kw("BOOL"),
            seq(kw("VERTEX"), optional(seq("<", $.vertexType, ">"))),
            kw("EDGE"),
            kw("JSONOBJECT"),
            kw("JSONARRAY"),
            kw("DATETIME"),
        ),

        /*
        parameterType := baseType
               | [ SET | BAG ] "<" baseType ">"
               | FILE
        */
        parameterType: $ => choice(
            $.baseType,
            seq(optional(choice("SET", "BAG")), "<", $.baseType, ">"),
            "FILE"
        ),

        /*
        ###############################################################################
        ## Operators, Functions, and Expressions

        constant := numeric | stringLiteral | TRUE | FALSE | GSQL_UINT_MAX
                | GSQL_INT_MAX | GSQL_INT_MIN | TO_DATETIME "(" stringLiteral ")"
        */
        constant: $ => choice(
            $.numeric // todo
        ),


        // mathOperator := "*" | "/" | "%" | "+" | "-" | "<<" | ">>" | "&" | "|"
        mathOperator: $ => choice("*", "/", "%", "+", "-", "<<", ">>", "&", "|"),

        /*  
        condition := expr
                | expr [ NOT ] IN setBagExpr
                | expr IS [ NOT ] NULL
                | expr BETWEEN expr AND expr
                | "(" condition ")"
                | NOT condition
                
                | (TRUE | FALSE)
                | expr [NOT] LIKE expr [ESCAPE escape_char]
        */
        condition: $ => choice(
            $.expr,
            seq($.condition, choice("AND", "OR"), $.condition), // | condition (AND | OR) condition
            seq($.expr, $.comparisonOperator, $.expr)           // expr comparisonOperator expr
            // todo
        ),

        //comparisonOperator := "<" | "<=" | ">" | ">=" | "==" | "!="
        comparisonOperator: $ => choice("<", "<=", ">", ">=", "==", "!="),

        // aggregator := COUNT | MAX | MIN | AVG | SUM

        /*
        expr := name  
            | globalAccumName
            | name "." name "." name "(" [argList] ")"
            | name "." name "(" [argList] ")" [ "." FILTER "(" condition ")" ]
            | name ["<" type ["," type]* ">"] "(" [argList] ")"
            | name "." localAccumName ("." name "(" [argList] ")")+ ["." name]
            | globalAccumName ("." name "(" [argList] ")")+ ["." name]
            | COALESCE "(" [argList] ")"
            | aggregator "(" [DISTINCT] setBagExpr ")"
            | ISEMPTY "(" setBagExpr ")"
            | "-" expr
            | "(" expr ")"
            | "(" argList "->" argList ")"	// key value pair for MapAccum
            | "[" argList "]"               // a list
            | constant
            | setBagExpr
            | name "(" argList ")"          // function call or a tuple object 
        */
        expr: $ => choice(
            $.name,
            $.globalAccumName,
            seq($.name, ".", $.name),                               // | name "." name
            seq($.name, ".", $.localAccumName, optional("\'")),     // | name "." localAccumName ["\'"]
            seq($.expr, $.mathOperator, $.expr)                     // | expr mathOperator expr
            // todo
        ),
        /*
                
        setBagExpr := name
                | globalAccumName 
                | name "." name
                    | name "." localAccumName
                    | name "." localAccumName ("." name "(" [argList] ")")+
                    | name "." name "(" [argList] ")" [ "." FILTER "(" condition ")" ]
                    | globalAccumName ("." name "(" [argList] ")")+
                    | setBagExpr (UNION | INTERSECT | MINUS) setBagExpr
                    | "(" argList ")"
                    | "(" setBagExpr ")"
        
        */


        /*
        ## Assignment Statements ##
        assignStmt := name "=" expr
                    | name "." attrName "=" expr
        */
        assignStmt: $ => choice(
            seq($.name, "=", $.expr),
            seq($.name, ".", $.attrName, "=", $.expr)
        ),
        /*
                    
        attrAccumStmt := name "." attrName "+=" expr
                    
        lAccumAssignStmt := vertexAlias "." localAccumName ("+="| "=") expr

        gAccumAssignStmt :=  globalAccumName ("+=" | "=") expr

        loadAccumStmt := globalAccumName "=" "{" LOADACCUM loadAccumParams
                                        ["," LOADACCUM loadAccumParams]* "}"

        loadAccumParams := "(" filePath "," columnId ["," [columnId]* ","
                        stringLiteral "," (TRUE | FALSE) ")" ["." FILTER "(" condition ")"]

        ## Function Call Statement ##
        funcCallStmt := name ["<" type ["," type"]* ">"] "(" [argList] ")"
                    | globalAccumName ("." funcName "(" [argList] ")")+
                
        argList := expr ["," expr]*
        */

        /*
        #########################################################
        ## Select Statement
        
        selectStmt  := gsqlSelectBlock
                    | sqlSelectBlock
        */
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
        tableName := name
        */

        // fromClause := FROM (step | stepV2 | pathPattern ["," pathPattern]*)
        fromClause: $ => seq(
            "FROM", choice($.step, /* todo $.stepV2 ,*/ seq($.pathPattern, repeat(seq(",", $.pathPattern))))
        ),


        // step   :=  stepSourceSet ["-" "(" stepEdgeSet ")" ("-"|"->") stepVertexSet]
        step: _ => seq(
            _.stepSourceSet,
            optional(seq(
                "-", "(", _.stepEdgeSet, ")", choice("-", "->"), _.stepVertexSet
            ))
        ),

        /*
        stepV2 :=  stepVertexSet ["-" "(" stepEdgeSet ")" "-" stepVertexSet]
        
        stepSourceSet := vertexSetName [":" vertexAlias]
        stepEdgeSet := [stepEdgeTypes] [":" edgeAlias]
        stepVertexSet := [stepVertexTypes] [":" vertexAlias]
        alias := (vertexAlias | edgeAlias)
        */

        // vertexAlias := name
        // edgeAlias := name
        vertexAlias: $ => $.name,
        edgeAlias: $ => $.name,

        /*
        stepEdgeTypes := atomicEdgeType | "(" edgeSetType ["|" edgeSetType]* ")"               
        atomicEdgeType := "_" | ANY | edgeSetType
        edgeSetType := edgeType | paramName | globalAccumName

        stepVertexTypes := atomicVertexType | "(" vertexSetType ["|" vertexSetType]* ")"
        atomicVertexType := "_" | ANY | vertexSetType
        vertexSetType := vertexType | paramName | globalAccumName
        */


        // #----------# Pattern Matching #----------#
        // pathPattern :=  stepVertexSet ["-" "(" pathEdgePattern ")" "-" stepVertexSet]*
        pathPattern: $ => seq(
            $.stepVertexSet,
            repeat(seq(
                "-", "(", /* todo $.pathEdgePattern, */ ")", "-", $.stepVertexSet
            ))),

        /*
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
        #--------------------------------------#
        */


        stepEdgeSet: _ => _.name,

        stepVertexSet: _ => _.name,

        // stepSourceSet -> vertexSetName [":" vertexAlias]
        stepSourceSet: _ => _.vertexSetName,

        /*
        sampleClause := SAMPLE ( expr | expr "%" ) EDGE WHEN condition
                    | SAMPLE expr TARGET WHEN condition
                    | SAMPLE expr "%" TARGET PINNED WHEN condition
                                
        whereClause := WHERE condition
        */
        whereClause: $ => seq(
            "WHERE", $.condition
        ),
        /*
        accumClause := [perClauseV2] ACCUM dmlSubStmtList

        perClauseV2 := PER "(" alias ["," alias] ")"
        
        postAccumClause := "POST-ACCUM" dmlSubStmtList
            
        dmlSubStmtList := dmlSubStmt ["," dmlSubStmt]*

        dmlSubStmt := assignStmt           // Assignment   
                    | funcCallStmt         // Function Call
                    | gAccumAccumStmt      // Assignment
                    | lAccumAccumStmt      // Assignment
                    | attrAccumStmt        // Assignment
                    | vAccumFuncCall       // Function Call
                    | localVarDeclStmt     // Declaration
                    | dmlSubCaseStmt       // Control Flow
                    | dmlSubIfStmt         // Control Flow
                    | dmlSubWhileStmt      // Control Flow
                    | dmlSubForEachStmt    // Control Flow
                    | BREAK                // Control Flow
                    | CONTINUE             // Control Flow
                    | insertStmt           // Data Modification
                    | dmlSubDeleteStmt     // Data Modification
                    | printlnStmt          // Output
                    | logStmt              // Output


        vAccumFuncCall := vertexAlias "." localAccumName ("." funcName "(" [argList] ")")+

        groupByClause := GROUP BY groupExpr ("," groupExpr)*
        groupExpr := expr

        havingClause := HAVING condition
        
        orderClause := ORDER BY expr [ASC | DESC] ["," expr [ASC | DESC]]*
        
        limitClause := LIMIT ( expr | expr "," expr | expr OFFSET expr 
        */

        // https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js#L887
        comment: $ => token(choice(
            seq('//', /.*/),
            seq('#', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),
    },
}

function lowercase() { return /[a-z]/ }
function uppercase() { return /[A-Z]/ }
function letter() { return choice(lowercase(), uppercase()) }
function digit() { return /[0-9]/ }

Object.assign(g.rules, require("./grammar/declarations"));
Object.assign(g.rules, require("./grammar/accumulators"));
module.exports = grammar(g);
