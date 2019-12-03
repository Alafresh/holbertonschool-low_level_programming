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
		return(0);
	return (l + r + 1);
}
