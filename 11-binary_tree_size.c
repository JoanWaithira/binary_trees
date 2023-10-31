#include "binary_trees.h"

/**
  * binary_tree_size - Counts the number of nodes in a binary_tree_t tree.
  *
  * tree: The tree whose nodes are to be counted.
  *
  * Return: Number of nodes in the tree. 0 if tree is null.
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
