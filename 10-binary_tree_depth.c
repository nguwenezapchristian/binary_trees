#include "binary_trees.h"
/**
 * binary_tree_depth - measure depth of a node
 * @tree: the tree to measure
 * Return: the depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		d++;
	}
	return (d);
}
