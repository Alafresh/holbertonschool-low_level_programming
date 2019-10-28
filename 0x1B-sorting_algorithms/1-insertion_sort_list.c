#include "sort.h"

/**
* _swap - swaps the top two elements of the stack
* @stack: head of the list
* @line_number: element of the node
*/

void _swap(listint_t *left, listint_t *right)
{
	if (left->prev)
		left->prev->next = right;
	else
		right->prev = left;
	left->next = right;
	right->prev = left->prev;
	right = left;
	left->prev = right;
}

/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending order
* @list: doublu linked list
*/

void insertion_sort_list(listint_t **list)
{

	while (list != NULL)
	{
		if ((*list)->n > (*list)->next->n)
		{
			_swap((*list), (*list)->next);
			print_list((*list));
		}
		(*list) = (*list)->next;
	}
}
