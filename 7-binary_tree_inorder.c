#include"binary_trees.h"
/**
 * binary_tree_inorder - this is the inroder transversal
 * @func: the function that prints
 * @tree: the point to root tree
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
