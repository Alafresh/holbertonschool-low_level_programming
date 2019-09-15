#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at given position
* @h: doubly linked list
* @idx: index of the list
* @n: data of a node
* Return: a New node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = (*h);
	unsigned int count = 0;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	while (count < idx - 1)
	{
		current = current->next;
		count++;
	}
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (!current->next)
		return (NULL);
	current->next = new_node;
return (new_node);
}
