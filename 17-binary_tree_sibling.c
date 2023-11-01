#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a binary tree node.
 *
 * @node: The node whose sib is to be found.
 *
 * Return: The sibling node of the current node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || (!node->parent->right && !node->parent->left))
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
