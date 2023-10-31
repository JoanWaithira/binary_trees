#include "binary_trees.h"

/**
  * binary_tree_leaves - Counts the leaves in a binary tree.
  *
  * tree: The tree whose leaves are to be counted.
  *
  * Return: Number of leaves in the tree.
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t add = 0;

  if (!tree)
    return (0);
  if (tree->parent)
    add = 1;
  return (add + binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
