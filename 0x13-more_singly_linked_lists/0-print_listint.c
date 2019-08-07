#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint - function that prints all the elements of a listint_t list
* @h: pointer
* Return: number or nodes
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
return (count);
}
