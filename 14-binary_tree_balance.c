#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height - calculates the height of the tree
 * @tree: is the tree
 * Return: the lenght of the tree or zero when no tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t rt = 0, lt = 0;

	if (tree == NULL)
		return (0);

	while (temp->left != NULL)
	{
		temp = temp->left;
		lt++;
	}

	temp = tree;

	while (temp->right != NULL)
	{
		temp = temp->right;
		rt++;
	}

	return (lt > rt ? lt : rt);
}
