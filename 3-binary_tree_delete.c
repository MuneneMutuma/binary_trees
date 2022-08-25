#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes entire binary tree from root
 *
 * @tree: root of node
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
