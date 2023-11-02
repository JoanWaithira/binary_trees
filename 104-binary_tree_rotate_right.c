#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates a binary tree to the right.
 *
 * @tree: The tree.
 *
 * Return: New root of the tree.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot = NULL;

	if (!tree || !tree->left)
		return (NULL);
	pivot = tree->left;
	tree->left = pivot->right;
	pivot->right = tree;

	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);
}
