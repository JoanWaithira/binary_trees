#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary_tree_t via a post-order approach.
 *
 * @tree: The tree to be traversed.
 * @func: The function to be performed on the data in the tree's nodes.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
