#include "lists.h"

/**
* pop_listint - function that deletes the head node of a linked list
* @head: listint_t
* Return: the head node's data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int data;

	if (*head == NULL)
		return (0);
	next_node = (*head)->next;
	data = (*head)->n;
	free(*head);
	(*head) = next_node;
return (data);
}
