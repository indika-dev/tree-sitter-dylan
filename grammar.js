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
    source_file: $ => "hello"
  }
});
