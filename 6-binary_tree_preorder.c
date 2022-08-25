#include "binary_trees.h"
#include <stdlib.h>

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);

	if (tree->left)
	{
		binary_tree_preorder((const binary_tree_t *)tree->left, func);
	}
	if (tree->right)
	{
		binary_tree_preorder((const binary_tree_t *)tree->right, func);
	}
}
