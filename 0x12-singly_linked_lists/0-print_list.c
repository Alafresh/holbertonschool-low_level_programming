#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* print_list - prints all the elements of a list_t list
* @h: is a pointer to linked list.
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int count = 0;
	char *a = h->str;

		while (h != NULL)
		{
			if (h->str != NULL)
			{
				printf("[%d] %s\n", h->len, h->str);
				h = h->next;
				count++;
			}
			else
			{
				a = "(nil)";
				printf("[0] %s\n", a);
				h = h->next;
			}
		}
return (count);
}
