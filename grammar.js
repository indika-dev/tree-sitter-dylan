/**
 * @file tree-sitter parser for OpenDylan
 * @author Stefan Maaßen
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dylan",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) =>
      choice($.meta_preprocessor_dylan, repeat($.function_definition)),
    comment_block_dylan: (_) => token(seq("///", /.*/)),
    line_comment: (_) => token(seq("//", /.*/)),

    /**
     * preprocessor
     */
    meta_preprocessor_dylan: ($) =>
      seq(
        $.module,
        seq(
          optional($.synopsis),
          optional($.author),
          optional($.copyright),
          optional($.version),
          optional($.files),
          optional($.executable),
          optional($.library),
        ),
      ),

    module: ($) => seq("module", $.string_literal),
    synopsis: ($) => seq("synopsis", $.string_literal),
    author: ($) => seq("author", $.string_literal),
    copyright: ($) => seq("copyright", choice($.string_literal, $.number)),
    version: ($) => seq("version", $.string_literal),
    files: ($) => seq("files", $.string_literal),
    executable: ($) => seq("executable", $.string_literal),
    library: ($) => seq("library", $.string_literal),

    /**
     * function definition
     */

    function_definition: ($) =>
      seq(
        "define",
        optional($.modifier),
        $.function_word,
        $.identifier,
        "(",
        ")",
        "=>",
        "(",
        ")",
      ),

    /**
     * Lexical grammar
     */
    identifier: (_) =>
      seq(/[_0-9\p{L}]/u, repeat(/[@_0-9\p{L}]/u), optional(choice("?", "!"))),
    literal: ($) =>
      choice(
        $.number,
        $.character_literal,
        $.string_literal,
        "#t",
        "#f",
        seq("#(", $.constant, ".", $.constant, ")"),
        seq("#(", repeat(seq($.constant, optional(","))), ")"),
        seq("#[", repeat(seq($.constant, optional(","))), "]"),
      ),
    string_literal: (_) => /[a-zA-Z \.,0-9<>@]+/,
    number: (_) => /\d+/,
    character_literal: (_) => /[a-z\-$\*]/,
    symbol: (_) => "_", // TODO was ist das?
    constant: ($) => choice($.literal, $.symbol),
    hashtag_word: (_) =>
      choice("#t", "#f", "#next", "#rest", "#key", "#all-keys", "#include"),
    begin_word: (_) =>
      choice(
        "begin",
        "block",
        "case",
        "for",
        "if",
        "method",
        "select",
        "unless",
        "until",
        "while",
      ),
    modifier: (_) =>
      choice(
        "sealed",
        "open",
        "sideways",
        "dynamic",
        "compiler-sideways",
        "compiler-open",
        "default-inline",
        "inline-only",
        "inline",
        "may-inline",
        "not-inline",
      ),
    function_word: (_) =>
      seq(optional("domain"), choice("method", "function", "generic")),
  },
});
/**
{
  "patterns": [
    {
      "comment": "Matches one 'Header: content' item with possible continuation lines",
      "begin": "^([[:alpha:]][[:print:]]*)(:)\\s*",
      "beginCaptures": {
        "1": {
          "name": "keyword.other.mail"
        },
        "2": {
          "name": "punctuation.separator.key-value.mail"
        }
      },
      "end": "^(?![ \\t\\v])",
      "name": "meta.header.mail"
    },
    {
      "begin": "(^[ \\t]+)?(?=//)",
      "beginCaptures": {
        "1": {
          "name": "punctuation.whitespace.comment.leading.dylan"
        }
      },
      "end": "(?!\\G)",
      "patterns": [
        {
          "begin": "//",
          "beginCaptures": {
            "0": {
              "name": "punctuation.definition.comment.dylan"
            }
          },
          "end": "\\n",
          "name": "comment.line.double-slash.dylan"
        }
      ]
    },
    {
      "begin": "^(?i:(module|synopsis|author|copyright|version|files|executable|library)):",
      "contentName": "meta.preprocessor.dylan",
      "end": "^\\s*$",
      "name": "keyword.control.preprocessor.dylan",
      "patterns": [
        {
          "match": "^(?i:(module|synopsis|author|copyright|version|files|executable|library)):",
          "name": "keyword.control.preprocessor.dylan"
        }
      ]
    },
    {
      "captures": {
        "1": {
          "name": "keyword.other.dylan"
        },
        "2": {
          "name": "storage.modifier.dylan"
        },
        "3": {
          "name": "storage.modifier.dylan"
        },
        "4": {
          "name": "storage.type.function.dylan"
        },
        "5": {
          "name": "entity.name.function.dylan"
        }
      },
      "match": "^(define)\\s+((?:(?:sealed|open|sideways|dynamic|compiler-sideways|compiler-open|default-inline|inline-only|inline|may-inline|not-inline)\\s+)+)?(?:(domain)|(method|function|generic)\\s+)([\\\\_A-Za-z0-9/!?*%$\\-\\<\\>=]*)",
      "name": "meta.function.dylan"
    },
    {
      "captures": {
        "1": {
          "name": "keyword.other.dylan"
        },
        "2": {
          "name": "storage.modifier.dylan"
        },
        "3": {
          "name": "storage.type.class.dylan"
        },
        "4": {
          "name": "entity.name.type.dylan"
        }
      },
      "match": "^(define)\\s+((?:(?:sealed|open|abstract|concrete|primary|free|dynamic|compiler-open)\\s+)+)?(class)\\s+([_A-Za-z0-9/!?*%$\\-\\<\\>]*)",
      "name": "meta.class.dylan"
    },
    {
      "captures": {
        "1": {
          "name": "keyword.other.dylan"
        },
        "2": {
          "name": "entity.name.other.dylan"
        },
        "3": {
          "name": "storage.type.namespace.dylan"
        }
      },
      "match": "^(define)\\s+((library|module)\\s+[_A-Za-z0-9/!?*%$\\-\\<\\>]+)",
      "name": "meta.namespace.dylan"
    },
    {
      "captures": {
        "1": {
          "name": "keyword.other.dylan"
        },
        "2": {
          "name": "storage.modifier.dylan"
        },
        "3": {
          "name": "storage.type.dylan"
        },
        "4": {
          "name": "entity.name.other.dylan"
        }
      },
      "match": "^(define)\\s+((?:(?:locked|thread)\\s+)+)?(constant|variable)\\s+([_A-Za-z0-9/!?*%$\\-\\<\\>]+)",
      "name": "meta.variable.dylan"
    },
    {
      "captures": {
        "1": {
          "name": "keyword.other.dylan"
        },
        "2": {
          "name": "storage.type.dylan"
        },
        "3": {
          "name": "entity.name.other.dylan"
        }
      },
      "match": "^(define)\\s+(macro)\\s+([_A-Za-z0-9/!?*%$\\-\\<\\>]+)",
      "name": "meta.macro.dylan"
    },
    {
      "captures": {
        "1": {
          "name": "keyword.other.dylan"
        },
        "2": {
          "name": "entity.name.other.dylan"
        }
      },
      "match": "^(define)\\s+([_A-Za-z0-9/!?*%$\\-\\<\\>\\s]+)",
      "name": "meta.definition.dylan"
    },
    {
      "match": "(#t|#f|#next|#rest|#key|#all-keys|#include)",
      "name": "constant.language.dylan"
    },
    {
      "match": "\\b((#x[0-9a-fA-F]*)|(([0-9]+\\.?[0-9]*)|(\\.[0-9]+))(([dDeEsSxX])(\\+|-)?[0-9]+)?)\\b",
      "name": "constant.numeric.dylan"
    },
    {
      "match": "'(\\\\<[0-9a-fA-F]*>|\\\\.|.)'",
      "name": "constant.character.dylan"
    },
    {
      "begin": "\"",
      "end": "\"",
      "name": "string.quoted.double.dylan",
      "patterns": [
        {
          "include": "#escape"
        }
      ]
    },
    {
      "begin": "(#)\"",
      "beginCaptures": {
        "1": {
          "name": "keyword.operator.dylan"
        }
      },
      "end": "\"",
      "name": "string.quoted.other.dylan",
      "patterns": [
        {
          "include": "#escape"
        }
      ]
    },
    {
      "match": "(?<=^|[,.()\\s])(above|afterwards|begin|below|block|by|case|cleanup|else|elseif|exception|finally|for|from|keyed-by|if|in|otherwise|select|then|to|unless|until:?|using|when|while:?)(?=$|[;,()\\s])",
      "name": "keyword.control.dylan"
    },
    {
      "match": "(?<=^|[,;\\s])end(?=$|[;,)\\s])",
      "name": "keyword.control.dylan"
    },
    {
      "match": "(?<=^|[,.(\\s])(class|constant|create|default:|define|each-subclass|exclude:|export|export:|function|generic|import:|inherited|init-function:|init-keyword:|init-value:|instance|keyword|let(\\s+handler)?|library|local|macro|method|module|prefix:|rename:|required|required-init-keyword:|sealed|setter:|slot|type:|use|variable|virtual)(?=$|[;,.()\\s])",
      "name": "keyword.other.dylan"
    },
    {
      "match": "<(abort|array|boolean|byte-string|character|class|collection|complex|condition|deque|double-float|empty-list|error|explicit-key-collection|extended-float|float|function|generic-function|integer|list|method|mutable-collection|mutable-explicit-key-collection|mutable-sequence|number|object-table|object|pair|range|rational|real|restart|sealed-object-error|sequence|serious-condition|simple-error|simple-object-vector|simple-restart|simple-vector|simple-warning|single-float|singleton|stretchy-collection|stretchy-vector|string|symbol|table|type-error|type|unicode-string|vector|warning)>",
      "name": "support.class.dylan"
    },
    {
      "match": "(?<=^|[~,.(\\[\\s])(abort|abs|add|add!|add-method|add-new|add-new!|all-superclasses|always|any\\?|applicable-method\\?|apply|aref|aref-setter|as|as-lowercase|as-lowercase!|as-uppercase|as-uppercase!|ash|backward-iteration-protocol|break|ceiling|ceiling/|cerror|check-type|choose|choose-by|complement|compose|concatenate|concatenate-as|condition-format-arguments|condition-format-string|conjoin|copy-sequence|curry|default-handler|dimension|dimensions|direct-subclasses|direct-superclasses|disjoin|do|do-handlers|element|element-setter|empty\\?|error|even\\?|every\\?|false-or|fill!|find-key|find-method|first|first-setter|floor|floor/|forward-iteration-protocol|function-arguments|function-return-values|function-specializers|gcd|generic-function-mandatory-keywords|generic-function-methods|head|head-setter|identity|initialize|instance\\?|integral\\?|intersection|key-sequence|key-test|last|last-setter|lcm|limited|list|logand|logbit\\?|logior|lognot|logxor|make|map|map-as|map-into|max|member\\?|merge-hash-codes|min|modulo|negative|negative\\?|next-method|object-class|object-hash|odd\\?|one-of|pair|pop|pop-last|positive\\?|push|push-last|range|rank|rcurry|reduce|reduce1|remainder|remove|remove!|remove-duplicates|remove-duplicates!|remove-key!|remove-method|replace-elements!|replace-subsequence!|restart-query|return-allowed\\?|return-description|return-query|reverse|reverse!|round|round/|row-major-index|second|second-setter|shallow-copy|signal|singleton|size|size-setter|slot-initialized\\?|sort|sort!|sorted-applicable-methods|subsequence-position|subtype\\?|table-protocol|tail|tail-setter|third|third-setter|truncate|truncate/|type-error-expected-type|type-error-value|type-for-copy|type-union|union|values|vector|zero\\?)(?=$|[;,.()\\s\\]])",
      "name": "support.function.dylan"
    }
  ],
  "repository": {
    "escape": {
      "match": "\\\\(<[0-9a-fA-F]*>|.)",
      "name": "constant.character.escape.dylan"
    }
  },
}
**/
