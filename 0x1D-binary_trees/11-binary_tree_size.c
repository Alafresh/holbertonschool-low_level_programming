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

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
