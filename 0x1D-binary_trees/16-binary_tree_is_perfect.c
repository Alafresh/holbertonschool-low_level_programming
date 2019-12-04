#include "binary_trees.h"
#include <stdio.h>
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
/**
 * binary_tree_height - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
 *
 * Return: newNode inserted
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);
	count_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	count_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (count_left > count_right ? count_left : count_right);
}
/**
 * binary_tree_is_full - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
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
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
/**
 * binary_tree_is_perfect - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
  *
 * Return: newNode inserted
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
	{
		if (binary_tree_is_perfect(tree->left) ==
		binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
		else
			return (0);
	}
	else
		return (0);
}
