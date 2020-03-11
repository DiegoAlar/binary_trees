#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (-1);
	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;
	else
		return (0);
	return (depth);
}
