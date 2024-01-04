#include "binary_trees.h"
/**
 * binary_tree_postorder - it transverse in postorder
 * @tree: pointer to the tree
 * @func: perfoms the print
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
