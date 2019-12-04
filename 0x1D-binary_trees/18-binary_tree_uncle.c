#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_uncle - Stores recursively
 *
 * @node: Node
 *
 * Return: newNode inserted
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *abuelo, *papa;

	if (node == NULL)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	abuelo = node->parent->parent;
	papa = node->parent;

	if (abuelo->left == papa)
	{
		return (abuelo->right);
	}
	return (abuelo->left);
}
