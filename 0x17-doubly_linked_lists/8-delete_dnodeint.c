#include "lists.h"

/**
* dlistint_len - function that returns number of elements
* @h: doubly linked list
* Return: numbe of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
return (count);
}

/**
* delete_dnodeint_at_index - deletes the node at index
* @head: doubly linked list
* @index: index
* Return: 1 or -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = (*head);
	unsigned int count = 0;
	unsigned int length = dlistint_len(delete);

	if ((*head) == NULL)
	{
		return (-1);
	}
	if ((*head)->next == NULL)
	{
		(*head) = NULL;
		return (1);
	}
	if (length < index)
	{
		return (-1);
	}
	if (count == index)
	{
		if (*head)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(delete);
			return (1);
		}
	}
	while (count < index)
	{
		delete = delete->next;
		count++;
	}
	delete->prev->next = delete->next;
	if (delete->next)
		delete->next->prev = delete->prev;
return (1);
}
