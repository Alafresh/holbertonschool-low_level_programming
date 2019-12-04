#include "binary_trees.h"
/**
 * binary_tree_nodes - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
  *
 * Return: newNode inserted
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
