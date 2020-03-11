#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order
 * @tree: tree to be traverse in pre-order
 * @func: pointer to function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}
}
