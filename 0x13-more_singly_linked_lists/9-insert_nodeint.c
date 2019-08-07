#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: double pointer.
* @idx: index of the list
* @n: new data
* Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *first;
	unsigned int i = 0;

	if (idx < i)
	if (head == NULL)
		return (NULL);
	first = (*head);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
	{
		tmp->next = first;
		first = tmp;
	}
	else
	{
		for (; i < idx - 1; i++)
			first = first->next;
		tmp->n = n;
		tmp->next = first->next;
		first->next = tmp;
	}
return (tmp);
}
