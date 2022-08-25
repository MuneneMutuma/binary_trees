#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: binary tree node
 *
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, right, left;

	height = 0;
	right = 0;
	left = 0;
	if (tree == NULL)
		return (0);

	if (tree->left)
		left = binary_tree_height((const binary_tree_t *)tree->left);
	if (tree->right)
		right = binary_tree_height((const binary_tree_t *)tree->right);
	if (!tree->left && !tree->right)
		return (0);

	if (left > right)
		height += left;
	else
		height += right;

	return (height + 1);
}

/**
 * binary_tree_balance - finds balance binary tree
 *
 * @tree: root or node of tree
 *
 * Return: returns balance of the tree
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t right, left;

	right = 0;
	left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left += binary_tree_height((const binary_tree_t *)tree->left) + 1;
	if (tree->right)
		right += binary_tree_height((const binary_tree_t *) tree->right) + 1;

	return (left - right);
}
