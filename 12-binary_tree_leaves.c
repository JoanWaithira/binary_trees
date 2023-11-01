#include "binary_trees.h"

/**
 * binary_tree_leaves_recursion - Counts the leaves in a binary tree.
 *
 * @tree: The tree whose leaves are to be counted.
 *
 * Return: Number of leaves in the tree.
 */
size_t binary_tree_leaves_recursion(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	right = binary_tree_leaves_recursion(tree->right);
	left = binary_tree_leaves_recursion(tree->left);
	return (1 + left + right);
}

/**
 * binary_tree_leaves - Wrapper for the recursive function.
 *
 * @tree: The tree whose leaves are to be counted.
 *
 * Return: Number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	right = binary_tree_leaves_recursion(tree->right);
	left = binary_tree_leaves_recursion(tree->left);
	return (left + right);
}
