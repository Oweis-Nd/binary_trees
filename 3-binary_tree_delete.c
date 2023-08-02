#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the binary tree
 * @tree: - the tree to be deleted
 * Return: frees up space
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	}
}
