#include "binary_trees.h"
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
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);
	return (1 + (rt > lt ? rt : lt));
}
