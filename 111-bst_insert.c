#include "binary_trees.h"

/**
 * bst_insert - Insert into a bst.
 *
 * @tree: Pointer to the bst.
 * @value: The integer to be inserted.
 *
 * Return: Address of the new node. Null if issues encountered.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *browser, *new_node;

	if (!tree)
		return (NULL);
	new_node = malloc(sizeof(bst_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = NULL;
	new_node->right = NULL;
	new_node->left = NULL;

	if (!(*tree))
	{
		*tree = new_node;
		return (new_node);
	}
	browser = *tree;

	while (browser->left && browser->right)
	{
		if (new_node->n < browser->n)
		{
			browser = browser->left;
			continue;
		}
		browser = browser->right;
	}
	new_node->parent = browser;
	if (browser->n < new_node->n)
		browser->left = new_node;
	else
		browser->right = new_node;
	return (new_node);
}
