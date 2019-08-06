#include "lists.h"

/**
* free_listint2 - function that frees a list.
* @head: listint_t
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *f;

	if (head == NULL || *head == NULL)
		return;
	while (ptr != NULL)
	{
		f = ptr;
		ptr = ptr->next;
		free(f);
	}
	(*head) = NULL;
}
