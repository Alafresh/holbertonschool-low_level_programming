#include "lists.h"

/**
* free_listint2 - function that frees a list.
* @head: listint_t
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *tmp;

	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	(*head) = NULL;
}
