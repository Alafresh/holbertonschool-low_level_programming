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

	if (head == NULL)
		return (NULL);
	first = (*head);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
	{
		tmp->next = (*head);
		tmp->n = n;
		(*head) = tmp;
		return (tmp);
	}
	else
	{
		while (first)
		{
			if (i == idx - 1)
			{
				tmp->n = n;
				tmp->next = first->next;
				first->next = tmp;
				return (tmp);
			}
		i++;
		first = first->next;
		}
	}
return (NULL);
}
