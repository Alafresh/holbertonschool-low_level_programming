#include "lists.h"

/**
* free_listint2 - function that frees a list.
* @head: listint_t
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *tmp;

	if (head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	(*head) = NULL;
}
