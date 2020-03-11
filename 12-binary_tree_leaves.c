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
