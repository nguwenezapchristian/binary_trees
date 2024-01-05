#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: if full return 1 otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int boolRight;
	int boolLeft;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		boolRight = binary_tree_is_full(tree->left);
		boolLeft = binary_tree_is_full(tree->right);
		return (boolRight && boolLeft);
	}
	return (0);
}
