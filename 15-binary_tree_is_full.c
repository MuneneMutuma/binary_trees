#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 *
 * @tree: root or node of tree
 *
 * Return: returns 1 if full or 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	right = 0;
	left = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left = binary_tree_is_full((const binary_tree_t *)tree->left);
		right = binary_tree_is_full((const binary_tree_t *)tree->right);
	}

	return (left && right);
}
