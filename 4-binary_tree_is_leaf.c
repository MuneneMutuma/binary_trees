#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if node is a leaf
 *
 * @node: a node of the tree
 *
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL)
		return (0);
	if (node->right != NULL)
		return (0);

	return (1);
}
