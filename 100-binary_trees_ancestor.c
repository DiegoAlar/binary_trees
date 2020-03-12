#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree && tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;
	else
		return (0);
	return (depth);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (first && first->parent && second && second->parent)
	{
		if (first->parent == second)
			return ((binary_tree_t *)second);
		else if (second->parent == first)
			return ((binary_tree_t *)first);
	}
	if (binary_tree_depth(first) - binary_tree_depth(second) == 0)
		return (first->parent);
	else if ((int)(binary_tree_depth(first) - (int)binary_tree_depth(second)) < 0)
		return (first->parent);
	else if ((int)binary_tree_depth(first) - (int)binary_tree_depth(second) > 0)
		return (second->parent);
	else
		return (NULL);
}
