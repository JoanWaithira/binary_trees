#include "binary_trees.h"

/**
 * binary_tree_height_ - Measures the height of a binary tree.
 *
 * @tree: The tree whose height is to be measured.
 *
 * Return: Max height of left branch - max height of right branch.
 */
size_t binary_tree_height_(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height_(tree->left);
	right = binary_tree_height_(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
  * binary_tree_balance - Calculates the balance factor of binary tree.
  *
  * @tree: The tree whose balance factor is to be calculated.
  *
  * Return: The diff between the height of the left branch and the right one.
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_height_(tree->left);
	right = binary_tree_height_(tree->right);
	return ((int)(left - right));
}
