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
	binary_tree_t *one, *two;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);
	one = binary_trees_ancestor(first->parent, second);
	two = binary_trees_ancestor(first, second->parent);
	if (!two)
		return (one);
	return (two);
}
