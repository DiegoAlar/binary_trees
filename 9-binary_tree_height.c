#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		r = binary_tree_height(tree->right) + 1;
	if (l > r)
		return (l);
	else
		return (r);
}
