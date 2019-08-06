#include "lists.h"

/**
* free_listint - function that frees a listint_t list
* @head: listint_t
*/

void free_listint(listint_t *head)
{
	listint_t *f = head;
	listint_t *tmp;

	while (f != NULL)
	{
		tmp = f->next;
		free(f);
		f = tmp;
		if (head == NULL)
			free(head);
	}
}
