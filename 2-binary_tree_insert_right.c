#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts node to the right of a parent node
 *
 * @parent: parent of the node
 * @value: value of the node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
