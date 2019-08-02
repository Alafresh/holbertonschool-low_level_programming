#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to linked list
* @str: string to be duplicated
* Return: the address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last = (*head);

	if (new_node == NULL)
		return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;
		if (*head == NULL)
		{
			(*head) = new_node;
			return (last);
		}
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
return (last);
}

/**
* _strlen - prototype function.
* @s: char pointer.
* Return: the length of a string.
*/

int _strlen(const char *s)
{
	int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}
