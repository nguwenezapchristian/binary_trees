#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sumL = 0, sumR = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	sumL += binary_tree_leaves(tree->left);
	sumR += binary_tree_leaves(tree->right);
	return (sumL + sumR);
}
