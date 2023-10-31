#include "binary_trees.h"

/**
  * binary_tree_preorder - Traverses a binary tree pre-order.
  *
  * tree: The tree to be traversed.
  * func: Function to be performed on the tree nodes data.
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!func || !tree)
      return;
    func(tree->data);
    binary_tree_preorder(tree->left);
    binary_tree_preorder(tree->right);
}
