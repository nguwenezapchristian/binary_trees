#include "binary_trees.h"
<<<<<<< HEAD

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
=======
/**
 * binary_tree_is_perfect - checks if it 's perfect
 * @tree: the tree
 * Return: 1 on perfect and 0 in failure
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	int lt = 0, rt = 0;

	while (temp->left != NULL || temp->right != NULL)
	{
		if (temp->left == NULL)
			return (0);
		temp = temp->left;
		lt++;
	}
	temp = tree;
	while (temp->right != NULL || temp->left != NULL)
	{
		if (temp->right == NULL)
			return (0);
		temp = temp->right;
		rt++;
	}
	if (rt == lt)
		return (1);
	return (0);
>>>>>>> afdfa99ad67523103d4124df02435f95dcc07b7c
}
