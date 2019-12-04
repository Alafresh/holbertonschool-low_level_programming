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
	binary_tree_t *tmp;

	if (node == NULL)
		return (NULL);
	tmp = node;
	if (!node->parent)
		return (NULL);
	tmp = tmp->parent;
	if (tmp->left->n == node->n)
	{
		return (tmp->right);
	}
	else
		return (tmp->left);
}
