#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: double pointer to linked list
* @str: string to be duplicated
* Return: the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
		list_t *new_node = (list_t *)malloc(sizeof(list_t));

		if (new_node == NULL)
		{
			return (NULL);
		}
			new_node->str = strdup(str);
			new_node->len = _strlen(str);
			new_node->next = (*head);
			(*head) = new_node;
return (new_node);
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
