#include "binary_trees.h"
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

	if (rt > lt)
		return (rt);
	else
		return (lt);
}
