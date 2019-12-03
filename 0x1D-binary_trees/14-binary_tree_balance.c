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

int binary_tree_balance(const binary_tree_t *tree)
{
	int balanceR;
	int balanceL;

	balanceL = 0;
	balanceR = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		balanceL += 1;
	}
	if (tree->right)
	{
		balanceR += 1;
	}
	balanceR += binary_tree_height(tree->right);
	balanceL += binary_tree_height(tree->left);
	return (balanceL - balanceR);
}
