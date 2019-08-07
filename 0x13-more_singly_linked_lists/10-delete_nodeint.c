#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index
* @head: double pointer
* @index: the index of the node
* Return: 1 if it succeeded or -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *de, *first;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	first = (*head);
	while (first != NULL)
	{
		if (index == 0)
		{
			de = first;
			*head = first->next;
			free(de);
			return (1);
		}
		if (i == index - 1)
		{
			de = first->next;
			first->next = (first->next)->next;
			free(de);
			return (1);
		}
	i++;
	first = first->next;
	}
return (-1);
}
