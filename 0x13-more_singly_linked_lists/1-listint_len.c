#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list
* @h: listint_t
* Return: return count
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
return (count);
}
