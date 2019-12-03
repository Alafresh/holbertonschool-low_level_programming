#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_postorder - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
 * @func: function pointer
 *
 * Return: newNode inserted
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	}
	return (0);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1)
	{
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
