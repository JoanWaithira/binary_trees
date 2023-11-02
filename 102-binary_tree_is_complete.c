#include "binary_trees.h"

/**
 * binary_tree_size - Count the number of nodes in a binary tree.
 *
 * @tree: The tree whose size is to be determined.
 *
 * Return: The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_complete_recursion - Checks binary tree completeness.
 *
 * @tree: The tree.
 * @index: index of the node.
 * @size: The size of the tree.
 *
 * Return: 1 if complete. 0 otherwise.
 */
int binary_tree_is_complete_recursion(const binary_tree_t *tree, int index,
		int size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (binary_tree_is_complete_recursion(tree->left, 2 * index + 1, size)
		&& binary_tree_is_complete_recursion(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - Wrapper function for the recursion version.
 *
 * @tree: The tree.
 *
 * Return: 1 if complete. 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	return (binary_tree_is_complete_recursion(tree, 0, binary_tree_size(tree)));
}
