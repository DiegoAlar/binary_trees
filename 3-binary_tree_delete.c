#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: the entired tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}
	free(tree);
}
