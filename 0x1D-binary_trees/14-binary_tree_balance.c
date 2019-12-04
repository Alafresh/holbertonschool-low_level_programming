#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
 *
 * Return: The branch
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	else
		l = 0;
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);
	else
		r = 0;
	if (l > r)
		return (l);
	else
		return (r);
}

/**
 * binary_tree_balance - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
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
