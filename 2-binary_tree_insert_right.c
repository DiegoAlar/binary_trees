#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: parent of the node to be inserted
 * @value: value to be inserted in the new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *newN;

	if (!parent)
		return (NULL);
	newN = malloc(sizeof(binary_tree_t));
	if (!newN)
		return (NULL);
	newN->n = value;
	newN->left = NULL;
	newN->right = NULL;
	if(parent->right == NULL)
	{
		newN->parent = parent;
		parent->right = newN;
	}
	else
	{
		temp = parent->right;
		temp->parent = newN;
		newN->parent = parent;
		parent->right = newN;
		newN->right = temp;
	}
	return (newN);

}
