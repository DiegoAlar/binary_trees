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
	int dif = 0;
	binary_tree_t *f_cpy = (binary_tree_t *)first;
	binary_tree_t *s_cpy = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	dif = (int)(binary_tree_depth(f_cpy) - (int)binary_tree_depth(s_cpy));
	if (dif == 0)
		return (f_cpy->parent);
	else if (dif < 0)
	{
		dif *= -1;
		while (dif--)
			s_cpy = s_cpy->parent;
	}
	else
	{
		while (dif--)
			f_cpy = f_cpy->parent;
	}
	if (f_cpy == s_cpy)
		return ((binary_tree_t *)f_cpy);
	while (f_cpy != s_cpy)
	{
		f_cpy = f_cpy->parent;
		s_cpy = s_cpy->parent;
	}
	return ((binary_tree_t *)f_cpy);
}
