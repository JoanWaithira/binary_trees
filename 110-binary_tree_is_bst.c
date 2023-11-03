#include "binary_trees.h"
#include <limits.h>
/**
 * is_bst_helper - Helper function to check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 * @min: Minimum value for nodes in the tree
 * @max: Maximum value for nodes in the tree
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return 1;
	if (tree->n <= min || tree->n >= max)
		return 0;

	int minimum = is_bst_helper(tree->left, min, tree->n);
	int maximum = is_bst_helper(tree->right, tree->n, max);

	return minimum && maximum;
}


/**
 * binary_tree_is_bst - A function that checks if a binary tree is valid
 * @tree: a pointer to the root node of the ree
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	return is_bst_helper(tree, INT_MIN, INT_MAX);
}
