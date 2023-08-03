#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses the tree in post-order method
 * @tree: the nodes to traverse
 * @func: the printing function
 * Return: the nodes in 'post-order'
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
