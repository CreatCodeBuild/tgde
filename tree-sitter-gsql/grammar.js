/*
GSQL Query Language EBNF
https://docs.tigergraph.com/dev/gsql-ref/querying/appendix-query/complete-formal-syntax-for-query-language
*/

const { kw, TRUE, FALSE } = require("./grammar/index");

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
        [$.pathPattern, $.stepV2],
        [$.name, $.atomicEdgeType],
        [$.stepEdgeSet, $.paramName, $.edgeType],
        [$.paramName, $.edgeType],
        [$.name, $.atomicVertexType],
        [$.paramName, $.vertexType, $.vertexSetName],
        [$.paramName, $.vertexType],
        [$.atomicEdgePattern, $.stepEdgeTypes],
        [$.stepEdgeTypes, $.atomicEdgeType],
        [$.expr, $.tableName],
        [$.fileVar, $.paramName],
        [$.vertexAlias, $.edgeAlias]
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
            $.selectStmt,
            $.printStmt,
        ),

        /*
        ###############################################################################
        ## Operators, Functions, and Expressions

        constant := numeric | stringLiteral | TRUE | FALSE | GSQL_UINT_MAX
                | GSQL_INT_MAX | GSQL_INT_MIN | TO_DATETIME "(" stringLiteral ")"
        */
        constant: $ => choice(
            $.numeric, $.stringLiteral, TRUE, FALSE
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
        
        


        // #----------# Pattern Matching #----------#
        // pathPattern :=  stepVertexSet ["-" "(" pathEdgePattern ")" "-" stepVertexSet]*
        pathPattern: $ => seq(
            $.stepVertexSet,
            repeat(seq(
                "-", "(", $.pathEdgePattern, ")", "-", $.stepVertexSet
            ))),

        
        // pathEdgePattern := atomicEdgePattern
        //                 | "(" pathEdgePattern ")"
        //                 | pathEdgePattern "." pathEdgePattern
        //                 | disjPattern
        //                 | starPattern
        pathEdgePattern: $ => choice(
            $.atomicEdgePattern,
            seq("(", $.pathEdgePattern, ")")
            // todo
        ),
        
                        
        // atomicEdgePattern  := atomicEdgeType		
        //                     | atomicEdgeType ">"	
        //                     | "<" atomicEdgeType	
        atomicEdgePattern: $ => choice(
            $.atomicEdgeType,
            seq($.atomicEdgeType, ">"),
            seq("<", $.atomicEdgeType)
        ),
                    
                            /*
        disjPattern := atomicEdgePattern ("|" atomicEdgePattern)*

        starPattern := ([atomicEdgePattern] | "(" disjPattern ")") "*" [starBounds]

        starBounds := CONST_INT ".." CONST_INT 
                    | CONST_INT ".." 
                    | ".." CONST_INT 
                    | CONST_INT 
        #--------------------------------------#
        */

        /*
        sampleClause := SAMPLE ( expr | expr "%" ) EDGE WHEN condition
                    | SAMPLE expr TARGET WHEN condition
                    | SAMPLE expr "%" TARGET PINNED WHEN condition
                                
        whereClause := WHERE condition
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

Object.assign(g.rules, require("./grammar/accumulators"));
Object.assign(g.rules, require("./grammar/declarations"));
Object.assign(g.rules, require("./grammar/output-statements"));
Object.assign(g.rules, require("./grammar/select"));
Object.assign(g.rules, require("./grammar/types-and-names"));
module.exports = grammar(g);
