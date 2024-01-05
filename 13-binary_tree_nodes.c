#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at least
 * 1 child in a binary tree
 * @tree:  a pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sumL = 0, sumR = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		sumL += binary_tree_nodes(tree->left);
		sumR += binary_tree_nodes(tree->right);
		return (1 + sumL + sumR);
	}
	else
		return (0);
}
