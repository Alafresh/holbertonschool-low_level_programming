#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* add_nodeint_end - adds a new node at the end
* @head: listint_t
* @n: data
* Return: a struct
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = (*head);

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
return (new_node);
}
