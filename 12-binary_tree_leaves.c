#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a tree
 *
 * @tree: root or node of tree
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right, left;

	right = 0;
	left = 0;
	if (tree == NULL)
		return (0);
	if (tree->right)
		right = binary_tree_leaves((const binary_tree_t *)tree->right);
	if (tree->left)
		left = binary_tree_leaves((const binary_tree_t *)tree->left);

	if (!tree->left && !tree->right)
		return (1);

	return (left + right);

}
