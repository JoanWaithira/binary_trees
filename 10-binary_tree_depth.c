#include "binary_trees.h"

/**
 * binary_tree_depth - Finds the depth of a binary_tree_t node from the root.
 *
 * @tree: The node whose depth is to be measured.
 *
 * Return: The depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *node;
	size_t depth = 0;

	if (!tree)
		return (0);

	node = (binary_tree_t *)tree;
	while (node)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}
