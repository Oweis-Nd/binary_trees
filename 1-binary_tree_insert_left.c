#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: the root node
 * @value: the values of the node
 * Return: the left child
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL || parent == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->right = NULL;
	newnode->parent = parent;
	newnode->left = parent->left;
	parent->left = newnode;

	if (newnode->left != NULL)
	{
		newnode->left->parent = newnode;
	}

	return (newnode);
}
