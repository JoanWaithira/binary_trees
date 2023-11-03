#include "binary_trees.h"

/**
* bst_search - Search for a value in the bst.
*
* @tree: The tree.
* @value: Value to be searched for.
*
* Return: Address of the value's node.
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);

	if (tree->n > value)
		return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
}
