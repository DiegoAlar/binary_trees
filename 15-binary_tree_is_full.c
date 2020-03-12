#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node to count the number of leaves
 * Return: returns integer counter of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves_l = 0, leaves_r = 0, leaves = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leaves_l = binary_tree_leaves(tree->left);
	if (tree->right)
		leaves_r = binary_tree_leaves(tree->right);
	leaves = leaves_r + leaves_l;
	if (!tree->left && !tree->right)
		leaves += 1;
	return (leaves);
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
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if node is full, 0 if it is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height = 0, b_base = 2, numNodes = 1;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	for (; height > 0; height--)
	{
		numNodes *= b_base;
	}
	if ((size_t)numNodes == binary_tree_leaves(tree))
		return (1);
	else
		return (0);
}
