#include "sort.h"

/**
* dlistint_len - function that returns number of elements
* @h: doubly linked list
* Return: numbe of elements in a linked list
*/

size_t dlistint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
return (count);
}

/**
* get_dnodeint_at_index - returns the nth node of a dubly linked list
* @head: doubly linked list
* @index: index of the node
* Return: returns data of a node
*/

listint_t *get_dnodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
return (current);
}

/**
* _swap - swaps the top two elements of the stack
* @left: node left
* @right: node right
*/

void _swap(listint_t *left, listint_t *right)
{

	if (left->prev)
		left->prev->next = right;
	if (right->next)
		right->next->prev = left;
	left->next  = right->next;
	right->prev = left->prev;
	right->next = left;
	left->prev = right;
}

/**
* insertion_sort_list - sorts a doubly linked list of integers
* @list: doublu linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *left, *right;
	unsigned int length, i, j;

	if (!(*list))
		return;
	length = dlistint_len((*list));
	i = 1;
	while (i < length)
	{
		j = i;
		right = get_dnodeint_at_index((*list), i);
		left = get_dnodeint_at_index((*list), i - 1);
		while (j > 0 &&  left->n > right->n)
		{
			_swap(left, right);
			if (right->prev == NULL)
				(*list) = right;
			print_list((*list));
			j--;
			right = get_dnodeint_at_index((*list), j);
			left = get_dnodeint_at_index((*list), j - 1);
		}
		i++;
	}
}
