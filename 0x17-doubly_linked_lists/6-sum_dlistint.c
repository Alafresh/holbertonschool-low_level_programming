#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data
* @head: doubly linked list
* Return: the sum of all datas
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
return (sum);
}
