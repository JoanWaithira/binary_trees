#include "binary_trees.h"

/**
 * binary_tree_levelorder - Perform level-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_t *queue[10000];
	int front = 0, rear = 0;

	while (front < rear)
	{
		 binary_tree_t *current = queue[front];
		 front++;

		 func(current->n);
		 if(current->left != NULL)
		 {
			 queue[rear] = current->left;
			 rear++;
		 }
		 if (current->right != NULL)
		 {
			 queue[rear] = current->right;
			 rear++;
		 }
	}


}

