#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - checks if node of binary tree is root
 *
 * @node: node of the tree
 *
 * Return: 1 if it is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);

	return (0);
}
