#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - adds a node to a binary tree
 *
 * @parent: parent of the node
 * @value: value of the node
 *
 * Return: newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;

	return (node);
}
