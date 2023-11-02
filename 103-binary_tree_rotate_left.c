#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree to the left.
 *
 * @tree: The tree.
 *
 * Return: New root of the tree.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot = NULL;

	if (!tree || !tree->right)
		return (NULL);
	pivot = tree->right;
	tree->right = pivot->left;
	pivot->left = tree;

	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);
}
