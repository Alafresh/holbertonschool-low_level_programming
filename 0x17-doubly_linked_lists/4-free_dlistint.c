#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *current = head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
