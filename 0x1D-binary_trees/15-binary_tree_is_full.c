#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_full - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
 *
 * Return: True or false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
