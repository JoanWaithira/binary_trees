#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child.
 *
 * @tree: The tree whose nodes are to be counted.
 *
 * Return: The number of nodes having children.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0, left, right;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		count = 1;
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (count + left + right);
}
