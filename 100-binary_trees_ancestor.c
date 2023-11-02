#include "binary_trees.h"

/**
 * binary_trees_ancestor - Checks the first common ancestor node of two.
 *
 * @first: One of the nodes being checked.
 * @second: One of the nodes being checked.
 *
 * Return: The lowest common ancestor node of the two input nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const
		binary_tree_t *second)
{
	const binary_tree_t *one = first;

	if (!second)
		return (NULL);
	while (one)
	{
		if (second == one)
			return ((binary_tree_t *)second);
		one = one->parent;
	}
	return (binary_trees_ancestor(first, second->parent));
}
