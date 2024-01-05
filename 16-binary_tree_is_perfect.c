#include "binary_trees.h"

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
}
