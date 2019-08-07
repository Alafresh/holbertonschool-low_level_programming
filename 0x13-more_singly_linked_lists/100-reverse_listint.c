#include "lists.h"

/**
* reverse_listint - reverse a listint_t
* @head: listint_t
* Return: a pointer to the first node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *q = NULL, *r;

	while ((*head) != NULL)
	{
		r = q;
		q = (*head);
		(*head) = (*head)->next;
		q->next = r;
	}
	(*head) = q;
return (q);
}
