#include "binary_trees.h"

/**
* array_to_bst - Creates a BST from array.
*
* @array: Array containing the values of the tree nodes.
* @size: The size of the array
*
* Return: A pointer to the root node of new tree.
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		bst_insert(&tree, array[i]);
	}
	return (tree);
}
