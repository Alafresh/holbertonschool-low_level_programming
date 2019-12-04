#include "binary_trees.h"
/**
 * binary_tree_insert_left - Stores recursively
 * each level in an array of strings
 *
 * @parent: Pointer to the node
 * @value: value add to node
 *
 * Return: newNode inserted
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temporal;

	if (parent == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		temporal = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = temporal;
		temporal->parent = parent->left;
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
