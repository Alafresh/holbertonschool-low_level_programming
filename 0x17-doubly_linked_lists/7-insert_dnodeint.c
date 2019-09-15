#include "lists.h"

/**
* dlistint_len - function that returns number of elements
* @h: doubly linked list
* Return: numbe of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
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
* insert_dnodeint_at_index - inserts a new node at given position
* @h: doubly linked list
* @idx: index of the list
* @n: data of a node
* Return: a New node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int length;
	dlistint_t *current = (*h);
	unsigned int count = 0;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	length = dlistint_len(current);
	if (length < idx - 1)
		return (NULL);
	while (count < idx - 1)
	{
		current = current->next;
		count++;
	}
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next = new_node;
return (new_node);
}
