#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures to
 * balance factor of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL)
			return (0 - binary_tree_height(tree->right));
		else if (tree->right == NULL)
			return (binary_tree_height(tree->left) - 0);
		else
			return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - calculates the height of the tree
 * @tree: is the tree
 * Return: the lenght of the tree or zero when no tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt = 0, rt = 0;

	if (tree == NULL)
		return (0);
	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);
	return (1 + (rt > lt ? rt : lt));
}
