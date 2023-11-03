#include "binary_trees.h"

/**
* avl_insert - Insert value into avl.
*
* @tree: Address of the tree.
* @value: value to insert.
*
* Return: Address of new_node.
*/
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *new_node = bst_insert(tree, value);
	avl_t *tmp = new_node;

	if (!tree || *tree == NULL)
		*tree = new_node;

	while (tmp)
	{
		if (binary_tree_balance(tmp) > 1 && tmp->left->n < value)
		{
			if (*tree == tmp)
				*tree = tmp->left->right;
			binary_tree_rotate_left(tmp->left);
			binary_tree_rotate_right(tmp);
		}
		else if (binary_tree_balance(tmp) > 1 && tmp->left->n > value)
		{
			if (*tree == tmp)
				*tree = tmp->left;
			binary_tree_rotate_right(tmp);
		}
		else if (binary_tree_balance(tmp) < -1 && tmp->right->n > value)
		{
			if (*tree == tmp)
				*tree = tmp->right->left;
			binary_tree_rotate_right(tmp->right);
			binary_tree_rotate_left(tmp);
		}
		else if (binary_tree_balance(tmp) < -1 && tmp->right->n < value)
		{
			if (*tree == tmp)
				*tree = tmp->right;
			tmp = binary_tree_rotate_left(tmp);
		}

		tmp = tmp->parent;
	}

	return (new_node);
}


/**
* bst_insert - Insert value into avl.
*
* @tree: Address of tree.
* @value: Value to be inserted.
*
* Return: Address of new_node.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *browser = NULL;

	if (!*tree)
	{
		*tree = (binary_tree_node(NULL, value));
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
