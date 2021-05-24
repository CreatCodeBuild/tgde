/*
GSQL Query Language EBNF
https://docs.tigergraph.com/dev/gsql-ref/querying/appendix-query/complete-formal-syntax-for-query-language
*/

const { kw, TRUE, FALSE } = require("./grammar/index");

const _kw = {
    CREATE: kw('CREATE'),
    VERTEX: kw('VERTEX'),
    DEFAULT: kw('DEFAULT'),
    WITH: kw('WITH'),
    STATS: kw('STATS'),
    PRIMARY_ID: kw('PRIMARY_ID'),
    DROP: kw('DROP'),
    ALL: kw('ALL'),
    OUTDEGREE_BY_EDGETYPE: kw('OUTDEGREE_BY_EDGETYPE'),
    UNDIRECTED: kw('UNDIRECTED'),
    DIRECTED: kw('DIRECTED'),
    EDGE: kw('EDGE'),
    FROM: kw('FROM'),
    TO: kw('TO'),
    rev_name: kw('rev_name'),
    REVERSE_EDGE: kw('REVERSE_EDGE'),
    ADMIN: kw('ADMIN'),
    GRAPH: kw('GRAPH'),
}

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
        [$.expr, $.setBagExpr, $.tableName]
    ],

    rules: {
        source_file: $ => repeat1(
            choice(
                $.CREATE_VERTEX,
                $.CREATE_UNDIRECTED_EDGE,
                $.CREATE_DIRECTED_EDGE,
                $.CREATE_GRAPH,
                $.DROP,
                $.createQuery,
                // $.selectStmt,
                // $.gsqlSelectClause,
                // $.stringLiteral,
                // $.fromClause,
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
            kw("create"), optional(seq(kw("OR"), kw("REPLACE"))), optional(kw("DISTRIBUTED")), "QUERY", $.queryName,
            "(", optional($.parameterList), ")",
            optional(seq("FOR", "GRAPH", $.graphName)),
            optional($.returns),
            optional(seq("API", "(", $.stringLiteral, ")")),
            optional(seq("SYNTAX", $.syntaxName))
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
            $.returnStmt
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
            seq($.expr, optional(kw("NOT")), kw("IN"), $.setBagExpr),
            seq($.expr, kw("IS"), optional(kw("NOT")), kw("NULL")),
            seq($.expr, $.comparisonOperator, $.expr),           // expr comparisonOperator expr
            seq($.condition, choice("AND", "OR"), $.condition), // | condition (AND | OR) condition
            // todo
        ),

        //comparisonOperator := "<" | "<=" | ">" | ">=" | "==" | "!="
        comparisonOperator: $ => choice("<", "<=", ">", ">=", "==", "!="),



        
        
        


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

        /*
        CREATE VERTEX vertex_type_name "(" primary_id_name_type
            ["," attribute_name type [DEFAULT default_value] ]* ")"
            [WITH [STATS="none"|"outdegree_by_edgetype"][primary_id_as_attribute="true"]]
        */
        CREATE_VERTEX: $=>seq(
            _kw.CREATE, _kw.VERTEX, $.vertexType, "(", $.primary_id_name_type, 
                repeat(seq(
                    ",", $.name, $.type, optional(seq(_kw.DEFAULT, $.expr))
                )),
            ")",
            optional($.WITH)
        ),

        /*
        CREATE UNDIRECTED EDGE edge_type_name "("
                FROM vertex_type_name "," TO vertex_type_name
                ["|" FROM vertex_type_name, TO vertex_type_name]*
                ["," attribute_name type [DEFAULT default_value]]* ")"        
        */
        CREATE_UNDIRECTED_EDGE: $=>seq(
            _kw.CREATE, _kw.UNDIRECTED, _kw.EDGE, $.edgeType, "(",
            _kw.FROM, $.vertexType, ",", _kw.TO, $.vertexType,
            repeat(seq(
                "|", _kw.FROM, $.vertexType, _kw.TO, $.vertexType
            )),
            repeat(seq(
                ",", $.attrName, $.type, optional(seq(_kw.DEFAULT, $.expr))
            )),
            ")"
        ),

        /*
        CREATE DIRECTED EDGE edge_type_name "("
                FROM vertex_type_name "," TO vertex_type_name
                ["|" FROM vertex_type_name, TO vertex_type_name]*
                ["," attribute_name type [DEFAULT default_value]]* ")"
                [WITH REVERSE_EDGE="rev_name"]        
        */
        CREATE_DIRECTED_EDGE: $=>seq(
            _kw.CREATE, _kw.DIRECTED, _kw.EDGE, $.edgeType, "(",
            _kw.FROM, $.vertexType, ",", _kw.TO, $.vertexType,
            repeat(seq(
                "|", _kw.FROM, $.vertexType, _kw.TO, $.vertexType
            )),
            repeat(seq(
                ",", $.attrName, $.type, optional(seq(_kw.DEFAULT, $.expr))
            )),
            ")",
            optional(seq(
                _kw.WITH, _kw.REVERSE_EDGE, "=", '"', _kw.rev_name, '"',
            ))
        ),

        WITH: $=>seq(
            _kw.WITH,
            optional(
                seq(_kw.STATS, "=", 
                    choice(
                        '"none"', 
                        seq('"', _kw.OUTDEGREE_BY_EDGETYPE, '"')
                    )
                )
            ),
            optional(
                seq(
                    "primary_id_as_attribute",
                    "=",
                    '"true"'
                )
            )
        ),

        /*
        CREATE GRAPH graph_name (vertex_or_edge_type, vertex_or_edge_type...)
                        [WITH ADMIN username]
        // Replace graph_name with the name you want to name the graph with
        // Replace vertex_or_edge_type with the vertex and edge types you
        //     want to include in the graph
        */
        CREATE_GRAPH: $=>seq(
            _kw.CREATE, _kw.GRAPH, $.name, "(", choice(repeat($.name), "*"), ")",
            optional(seq(
                _kw.WITH, _kw.ADMIN, $.name, 
            ))
        ),

        // primary_id_name_type := PRIMARY_ID id_name id_type
        primary_id_name_type: $=>seq(
            _kw.PRIMARY_ID,
            $.name,
            $.type
        ),

        // DROP ALL
        DROP: $=>seq(
            _kw.DROP,
            _kw.ALL
        )
        
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
module.exports = grammar(g);
