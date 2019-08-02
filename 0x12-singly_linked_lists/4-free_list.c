#include "lists.h"

/**
* free_list - free a list_t list
* @head: pointer :v
*/

void free_list(list_t *head)
{
	list_t *freedom = head;

	while (freedom)
	{
		free(freedom->str);
		free(freedom);
		freedom = freedom->next;
		if (head == NULL)
			free(head);
	}
}
