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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect or 0 if it's not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int num = 2;

	if (!tree)
		return (0);
	if (((num << binary_tree_height(tree)) - 1) == (int)binary_tree_size(tree))
		return (1);
	else
		return (0);
}
