#include "lists.h"

/**
* sum_listint - returns the sum of all the data(n)
* @head: pointer
* Return: the sum
*/

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	ptr = head;
	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
return (sum);
}
