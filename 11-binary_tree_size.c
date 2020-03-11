#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_1 = 0, size_2 = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		size_1 = binary_tree_size(tree->left);
	}
	if (tree->right)
	{
		size_2 = binary_tree_size(tree->right);
	}
	return (size_1 + size_2 + 1);
}
