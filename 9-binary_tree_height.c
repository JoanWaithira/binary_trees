#include "binary_trees.h"

/**
 * binary_tree_height_recursion - Measures the height of a binary tree recurse.
 *
 * @tree: The tree whose depth is to be measured.
 *
 * Return: The maximum height of the binary tree.
 */
size_t binary_tree_height_recursion(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left += binary_tree_height_recursion(tree->left);
	right += binary_tree_height_recursion(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_height - Outer wrapper for the binary tree height function.
 *
 * @tree: The tree whose depth is to be measured.
 *
 * Return: The maximum height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left += binary_tree_height_recursion(tree->left);
	right += binary_tree_height_recursion(tree->right);

	if (left >= right)
		return (left);
	return (right);
}
