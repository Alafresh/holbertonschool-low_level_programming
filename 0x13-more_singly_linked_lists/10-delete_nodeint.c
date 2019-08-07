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
	unsigned int i;

	if (head == NULL)
		return (-1);
	first = (*head);
	if (index < 1)
		return (-1);
	if (index == 0)
	{
		de = first;
		first = first->next;
		free(de);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		de = first;
		first = first->next;
		de->next = first->next;
		free(first->next);
		return (1);
	}
return (-1);
}
