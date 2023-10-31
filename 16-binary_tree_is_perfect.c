#include "binary_trees.h"

/**
  * binary_tree_is_perfect - Checks if the input binary tree is perfect.
  *
  * tree: The tree to be checked for perfection.
  *
  * Return: 0 if perfect or empty and 1 otherwise.
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->left))
		return (0);
	if (
