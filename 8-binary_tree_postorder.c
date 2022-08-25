#include "binary_trees.h"
#include <stdlib.h>

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
