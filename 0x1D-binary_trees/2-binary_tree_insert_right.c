#include "binary_trees.h"
/**
 * binary_tree_insert_right - Stores recursively
 * each level in an array of strings
 *
 * @parent: Pointer to the node
 * @value: value add to node
 *
 * Return: newNode inserted
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temporal;

	if (parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		temporal = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = temporal;
		temporal->parent = parent->right;
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
