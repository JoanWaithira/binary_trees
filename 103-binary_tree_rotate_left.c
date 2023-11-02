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
	binary_tree_t *temp = NULL;

	if (!tree || !tree->right)
		return (NULL);
	temp = tree->right;
	tree->right = temp->left;
	if (temp->parent)
	{
		if (temp->parent->left == tree)
			temp->parent->left = temp;
		else
			temp->parent->right = temp;
	}
	return (temp);
}
