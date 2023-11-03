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
	bst_t *browser;

	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	browser = *tree;
	while (browser)
	{
		if (value == browser->n)
			return (NULL);
		else if (value > browser->n)
		{
			if (browser->right == NULL)
			{
				browser->right = binary_tree_node(browser, value);
				return (browser->right);
			}
			browser = browser->right;
		}
		else if (value < browser->n)
		{
			if (browser->left == NULL)
			{
				browser->left = binary_tree_node(browser, value);
				return (browser->left);
			}
			browser = browser->left;
		}
	}
	return (NULL);
}
