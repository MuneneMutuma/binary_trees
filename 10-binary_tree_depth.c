#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 *
 * @tree - node in the binary tree
 *
 * Return: returns depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		depth += binary_tree_depth((const binary_tree_t *)tree->parent);
		return (depth + 1);
	}

	return (depth);
}
