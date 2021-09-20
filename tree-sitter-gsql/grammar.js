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
        [$.baseType, $.accumType],
        [$.name, $.atomicEdgeType],
        [$.stepEdgeSet, $.paramName, $.edgeType],
        [$.paramName, $.edgeType],
        [$.name, $.atomicVertexType],
        [$.paramName, $.vertexType, $.vertexSetName],
        [$.paramName, $.vertexType],
        [$.expr, $.tableName],
        [$.fileVar, $.paramName],
        [$.vertexAlias, $.edgeAlias],
        [$.source_file, $.gsqlSelectBlock],
        [$.stepV2, $.pathPattern],
        [$.stepV2, $.pathEdgePattern],
        [$.condition],
        [$.condition, $.expr],
        [$.source_file, $.constant],
        [$.integer, $.real],
        [$.integer],
        [$.real],
        [$.pathPattern],
        [$.expr, $.assignStmt],
        [$.expr],
        [$.gsqlSelectBlock],
        [$.expr, $.gAccumAccumStmt],
        [$.seed, $.name],
        [$.paramName, $.vertexSetName],
        [$.simpleSet],
        [$.paramName, $.varName],
        [$.declStmts],
        [$.queryBodyIfStmt],
        [$.expr, $.setBagExpr],
        [$.expr, $.setBagExpr, $.tableName],
        [$.assignStmt, $.attrName],
        // [$.name]
    ],

    rules: {
        source_file: $ => repeat1(
            choice(
                $.CREATE_VERTEX,
                $.CREATE_UNDIRECTED_EDGE,
                $.CREATE_DIRECTED_EDGE,
                $.CREATE_GRAPH,
                $.USE_GRAPH,
                $.DROP,
                $.ADD_INDEX,
                $.DROP_INDEX,
                $.create_loading_job,
                $.createQuery,
                $.interpretQuery,
                // $.selectStmt,
                // $.gsqlSelectClause,
                // $.stringLiteral,
                $.name,
                $.fromClause,
                // $.whereClause,
                // $.condition,
                // $.accumClause,
                // $.parameterList,
                // $.createSignature,
                // $.returns
                // $.declStmts,
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
            $.createSignature,
            "{", $.queryBody, "}"
        ),

        createSignature: $=> seq(
            kw.CREATE, optional(seq(kw("OR"), kw("REPLACE"))), optional(kw("DISTRIBUTED")), "QUERY", $.queryName,
            "(", optional($.parameterList), ")",
            optional(seq("FOR", "GRAPH", $.graphName)),
            optional($.returns),
            optional(seq("API", "(", $.stringLiteral, ")")),
            optional(seq("SYNTAX", $.syntaxName))
        ),

        interpretQuery: $=>seq(
            kw.INTERPRET, "QUERY", "(", optional($.parameterList), ")",
            optional(seq("FOR", "GRAPH", $.graphName)),
            "{", $.queryBody, "}"
        ),

        returns:$=> seq("RETURNS", "(", choice($.baseType, $.accumType), ")"),

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
        declStmt: $ => choice(
            $.baseDeclStmt, 
            $.accumDeclStmt, 
            $.fileDeclStmt
        ),

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
            $.vSetVarDeclStmt,
            $.queryBodyIfStmt,
            $.returnStmt,
            $.queryBodyWhileStmt
        ),

        /*
        ###############################################################################
        ## Operators, Functions, and Expressions

        constant := numeric | stringLiteral | TRUE | FALSE | GSQL_UINT_MAX
                | GSQL_INT_MAX | GSQL_INT_MIN | TO_DATETIME "(" stringLiteral ")"
        */
        constant: $ => choice(
            $.numeric, $.stringLiteral, kw.TRUE, kw.FALSE
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
            seq($.expr, optional(kw("NOT")), kw("IN"), $.setBagExpr),
            seq($.expr, kw("IS"), optional(kw("NOT")), kw("NULL")),
            seq($.expr, $.comparisonOperator, $.expr),           // expr comparisonOperator expr
            seq($.condition, choice("AND", "OR"), $.condition), // | condition (AND | OR) condition
            seq(kw.NOT, $.condition)
            // todo
        ),

        //comparisonOperator := "<" | "<=" | ">" | ">=" | "==" | "!="
        comparisonOperator: $ => choice("<", "<=", ">", ">=", "==", "!="),



        
        
        


        // #----------# Pattern Matching #----------#
        // pathPattern :=  stepVertexSet ["-" "(" pathEdgePattern ")" "-" stepVertexSet]*
        pathPattern: $ => seq(
            $.stepVertexSet,
            repeat(seq(
                "-", "(", $.pathEdgePattern, ")", choice("-", "->"), $.stepVertexSet
            ))),

        
        // pathEdgePattern := atomicEdgePattern
        //                 | "(" pathEdgePattern ")"
        //                 | pathEdgePattern "." pathEdgePattern
        //                 | disjPattern
        //                 | starPattern
        pathEdgePattern: $ => choice(
            $.stepEdgeSet,
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
Object.assign(g.rules, require("./grammar/assignment-statements.js"));
Object.assign(g.rules, require("./grammar/control-flow-statements.js"));
Object.assign(g.rules, require("./grammar/declarations"));
Object.assign(g.rules, require("./grammar/operators-functions-expressions.js"));
Object.assign(g.rules, require("./grammar/output-statements"));
Object.assign(g.rules, require("./grammar/select"));
Object.assign(g.rules, require("./grammar/types-and-names"));
Object.assign(g.rules, require("./grammar/schema"));
Object.assign(g.rules, require("./grammar/create-loading-job"));
module.exports = grammar(g);
