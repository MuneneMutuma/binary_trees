#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - finds size of binary tree
 *
 * @tree: root or node of a binary tree
 *
 * Return: size of tree from node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right, left, size;

	left = 0;
	right = 0;
	size = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right = binary_tree_size((const binary_tree_t *)tree->right);

	if (tree->left)
		left = binary_tree_size((const binary_tree_t *)tree->left);

	if (!tree->left && !tree->right)
		return (1);

	size = left + right;

	return (size + 1);
}
