#include "binary_trees.h"

/**
  * binary_tree_inorder - Traverses a binary_tree_t via an in-order approach.
  *
  * tree: The tree to be traversed.
  * func: The function to be performed on the nodes of the tree.
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    binary_tree_inorder(tree->left);
    func(tree->n);
    binary_tree_inorder(tree->right);
}
