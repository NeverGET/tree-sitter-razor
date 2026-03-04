package tree_sitter_razor_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-razor"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_razor.Language())
	if language == nil {
		t.Errorf("Error loading Razor grammar")
	}
}
