#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - prints post-order traversal of binary tree
 *
 * @tree: root or node of tree
 * @func: function for printing
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL)
		return;


	if (tree->left)
	{
		binary_tree_postorder((const binary_tree_t *)tree->left, func);
	}

	if (tree->right)
	{
		binary_tree_postorder((const binary_tree_t *)tree->right, func);
	}

	func(tree->n);
}
