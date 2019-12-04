#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_sibling - Stores recursively
 *
 * @node: Node
 *
 * Return: newNode inserted
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (!node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
