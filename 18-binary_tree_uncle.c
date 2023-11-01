#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds an uncle of a binary tree node.
 *
 * @node: The node in question.
 *
 * Return: The uncle node of the node in question. Null if none found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
