#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - finds the number of nodes with atleast one child
 *
 * @tree: root or node of the tree
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes, left, right;

	right = 0;
	left = 0;
	nodes = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	if (tree->left)
		left = binary_tree_nodes((const binary_tree_t *)tree->left);
	if (tree->right)
		right = binary_tree_nodes((const binary_tree_t *)tree->right);

	nodes = left + right + 1;

	return (nodes);
}
