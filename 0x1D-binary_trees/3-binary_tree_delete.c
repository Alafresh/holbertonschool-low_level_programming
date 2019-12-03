#include "binary_trees.h"
/**
 * binary_tree_delete - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
 *
 * Return: newNode inserted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
