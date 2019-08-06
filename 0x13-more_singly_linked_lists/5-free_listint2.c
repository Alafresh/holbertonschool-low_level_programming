#include "lists.h"

/**
* free_listint2 - function that frees a list.
* @head: listint_t
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *f;

	while (ptr != NULL)
	{
		f = ptr->next;
		free(ptr);
		ptr = f;
		if (head == NULL)
			return;
	}
	(*head) = NULL;
}
