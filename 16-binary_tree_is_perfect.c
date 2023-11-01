#include "binary_trees.h"

/**
 * binary_tree_max_height - Checks max height of a binary tree.
 *
 * @tree: The tree whose depth is to be measured.
 *
 * Return: The maximum height of the binary tree.
 */
size_t binary_tree_max_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left += binary_tree_max_height(tree->left);
	right += binary_tree_max_height(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_min_height - Checks the minimum height of the tree.
 *
 * @tree: The tree whose depth is to be measured.
 *
 * Return: The maximum height of the binary tree.
 */
size_t binary_tree_min_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left += binary_tree_min_height(tree->left);
	right += binary_tree_min_height(tree->right);

	if (left >= right)
		return (right + 1);
	return (left + 1);
}

/**
 * binary_tree_is_perfect - Checks if the input binary tree is perfect.
 *
 * @tree: The tree to be checked for perfection.
 *
 * Return: 0 if perfect or empty and 1 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_max_height(tree) == binary_tree_min_height(tree))
		return (0);
	return (1);
}
