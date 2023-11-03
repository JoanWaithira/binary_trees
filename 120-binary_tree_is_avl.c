#include "binary_trees.h"
#include <limits.h>

/**
* binary_tree_is_bst_rec - Check if a tree is a bst.
*
* @tree: The tree.
* @min: Current allowed min value.
* @max: Current allowed max value.
*
* Return: 1 if bst. 0 otherwise.
*/
int binary_tree_is_bst_rec(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (binary_tree_is_bst_rec(tree->left, min, tree->n - 1) &&
		binary_tree_is_bst_rec(tree->right, tree->n + 1, max));
}

/**
* binary_tree_is_avl_rec - Check if bst is avl.
*
* @tree: The tree.
*
* Return: 1 if avl. 0 otherwise.
*/
int binary_tree_is_avl_rec(const avl_t *tree)
{
	if (!tree)
		return (1);

	if (binary_tree_balance(tree) > 1 || binary_tree_balance(tree) < -1)
		return (0);

	return (binary_tree_is_avl_rec(tree->left) &&
			binary_tree_is_avl_rec(tree->right));

}

/**
* binary_tree_is_avl - Wrapper for checking if binary tree is an avl.
*
* @tree: The tree.
*
* Return: 1 if avl. 0 otherwise.
*/
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!binary_tree_is_bst_rec(tree, INT_MIN, INT_MAX))
		return (0);

	return (binary_tree_is_avl_rec(tree));
}

/**
* binary_tree_height - Checks height of input tree.
*
* @tree: The tree.
*
* Return: Height of tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	else
		height_left = 1;

	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);
	else
		height_right = 1;

	if (height_left > height_right)
		return (height_left);
	return (height_right);
}


/**
* binary_tree_balance - Checks the balance factor of binary tree.
*
* @tree: The tree.
*
* Return: BF of binary tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
