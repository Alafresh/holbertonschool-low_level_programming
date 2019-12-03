#include "binary_trees.h"
/**
 * binary_tree_delete - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
 *
 * Return: newNode inserted
 */
int binary_tree_is_leaf(const binary_tree_t *node);
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
