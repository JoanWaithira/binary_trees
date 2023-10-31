#include "binary_trees.h"

/**
  * binary_tree_height_ - Measures the height of a binary tree.
  *
  * tree: The tree whose height is to be measured.
  */
size_t binary_tree_height_(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    if (!tree)
      return (0);
    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);

    if (left >= right)
      return (left + 1);
    return (right + 1);
}

/**
  * binary_tree_balance - Calculates the balance factor of the input binary tree.
  *
  * tree: The tree whose balance factor is to be calculated.
  *
  * Return: The difference between the height of the left branch and the right one.
  */
int binary_tree_balance(const binary_tree_t *tree)
{
  if (!tree)
    return (0);
  return ((int)(binary_tree_height_(tree->left) - binary_tree_height_(tree->right)));
}
