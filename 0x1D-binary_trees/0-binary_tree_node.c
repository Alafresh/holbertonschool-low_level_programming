#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;
	binary_tree_t *cu;

	bt = malloc(sizeof(bst_t));
	if (bt == NULL)
	{
		return NULL;
	}
      	bt->n = value;
	bt->left = NULL;
	bt->right = NULL;
	if (parent == NULL)
		parent = bt;
	else 
	{
		*cu = *parent;
		bt->parent = parent;
		while (1)
		{
			if(value < cu->n)
			{
				cu = cu->left;
				if(cu == NULL)
				{
					parent->left = bt;
					return bt->left;
				}
			}
			else 
			{
				cu = cu->right;
				if (cu == NULL)
				{
					parent->right = bt;
					return bt->right;
				}
			}
		}
	}
}
