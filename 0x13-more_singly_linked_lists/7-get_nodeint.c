#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a list
* @head: listint_t
* @index: index of node
* Return: nth
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;
	count = 0;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
return (NULL);
}
