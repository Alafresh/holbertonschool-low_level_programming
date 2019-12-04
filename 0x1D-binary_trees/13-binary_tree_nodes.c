#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the node
 *
 * Return: Number of child nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	l = 0;
	r = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
		l += (binary_tree_nodes(tree->left));
	if (tree->right)
		r += (binary_tree_nodes(tree->right));
	else
		return (0);
	return (l + r + 1);
}
