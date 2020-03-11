#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = binary_tree_nodes(tree->left);
	if (tree->right)
		r = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (l + r + 1);
	else
		return (0);
}
