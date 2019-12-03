#include "binary_trees.h"
/**
 * binary_tree_postorder - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
 * @func: function pointer
 *
 * Return: newNode inserted
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t p;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		p = 1 + binary_tree_depth(tree->parent);
	else
		p = 0;
	return (p);
}
