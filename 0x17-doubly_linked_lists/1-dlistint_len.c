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
