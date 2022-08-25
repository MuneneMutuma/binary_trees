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
 * binary_tree_leaves - counts the number of leaves in a tree
 *
 * @tree: root or node of tree
 *
 * Return - number of leaves
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

/**
 * binary_tree_is_perfect - checks whether tree is perfect
 *
 * @tree: node or root of tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nodes, leaves, height, test, a;

	if (tree == NULL)
		return (0);
	height = 0;
	leaves = 0;
	nodes = 0;

	nodes = binary_tree_nodes((const binary_tree_t *)tree);
	printf("nodes: %lu\n", nodes);
	leaves = binary_tree_leaves((const binary_tree_t *)tree);
	printf("leaves: %lu\n", leaves);
	height = binary_tree_height((const binary_tree_t *)tree);
	printf("height: %lu\n", height);

	test = 2;
	a = height;

	while (a > 0)
	{
		test *= 2;
		a--;
	}

	return ((leaves + nodes) == (test - 1));
}
