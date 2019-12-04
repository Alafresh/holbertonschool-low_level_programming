#include "binary_trees.h"
#include <stdio.h>

#include "binary_trees.h"
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

/**
* binary_tree_is_perfect - Stores recursively
* each level in an array of strings
*
* @tree: Pointer to the node
*
* Return: True or false
*/

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
