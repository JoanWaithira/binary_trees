#include "binary_trees.h"

/**
  * binary_tree_is_full - Checks if a binary tree is full.
	*
	* tree: The tree whose fullness status is to be checked.
	*
	* Return: 0 if full and 1 otherwise.
	*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (right == 0 && left == 0)
			return (0);
	}
	return (1);
}
