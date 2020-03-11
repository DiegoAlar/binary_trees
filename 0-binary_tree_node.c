#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent of the node to be inserted
 * @value: value to be inserted in the new node
 * Return: the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->n = value;
	root->left = NULL;
	root->right = NULL;
	if (!parent)
	{
		root->parent = NULL;
		return (root);        
	}
	root->parent = parent;
	return (root);
}
