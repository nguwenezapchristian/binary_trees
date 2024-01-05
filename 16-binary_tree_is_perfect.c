#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int boolR = 0, boolL = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		boolL = binary_tree_is_perfect(tree->left);
		boolR = binary_tree_is_perfect(tree->right);
	}
	return (boolL == boolR);
}
