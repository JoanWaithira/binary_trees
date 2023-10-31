#include "binary_trees.h"

/**
  * binarty_tree_is_leaf - Checks if a binary_tree_t tree node is a leaf.
  *
  * node: The node to be checked.
  *
  * Returns: 1 if node is a leaf. 0 otherwise.
  */
int binary_tree_is_leaf(cosnt binary_tree_t *node)
{
    if (node->parent == NULL)
        return (0);
    return (1);
}
