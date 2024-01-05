#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if it 's perfect
 * @tree: the tree
 * Return: 1 on perfect and 0 in failure
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int rt, lt; 

	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);

	if (lt == rt)
		return (1);
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
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);
	return (1 + (rt > lt ? rt : lt));
}

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: the pointer to the node
 * Return: 1 if leaf and 0 else
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
