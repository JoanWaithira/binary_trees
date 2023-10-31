#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if the input node is a binary_tree_t root node.
 *
 * @node: The node to be checked.
 *
 * Return: 1 if node is a root node and 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	return (0);
}
