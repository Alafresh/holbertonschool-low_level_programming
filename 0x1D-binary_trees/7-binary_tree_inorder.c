#include "binary_trees.h"
/**
 * binary_tree_inorder - Stores recursively
 * each level in an array of strings
 *
 * @tree: Pointer to the node
 * @func: pointer function
 *
 * Return: newNode inserted
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
