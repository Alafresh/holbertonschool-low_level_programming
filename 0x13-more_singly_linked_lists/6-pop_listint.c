#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *next_node;

	if (*head == NULL)
		return (0);
	next_node = (*head)->next;
	free(*head);
	(*head) = next_node;
return (next_node->n);
}
