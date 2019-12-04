#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Stores recursively
 * each level in an array of strings
 *
 * @node: Pointer to the node
 *
 * Return: newNode inserted
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
