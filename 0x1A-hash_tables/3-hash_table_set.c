#include "hash_tables.h"
hash_node_t *add_node(hash_node_t **head, const char *str, const char
*key)
{
	hash_node_t *item;

	if (head == NULL)
	{
		return (NULL);
	}

	item = *head;
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		return (NULL);
	}
	item->value = strdup(str);
	item->key = strdup(key);
	item->next = *head;
	*head = item;
	return (item);
}
/**
* hash_table_set - function that adds an element
* @ht: hash table
* @key: is the key
* @value: value associated with the key
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	int index, flag;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (!current)
	{
		add_node(&(ht->array[index]), value, key);
		if (ht->array[index] == NULL)
			return (0);
	}
	else
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				flag = 1;
			}
			current = current->next;
		}
		if (flag == 0)
		{
			add_node(&(ht->array[index]), value, key);
			if (ht->array[index] == NULL)
				return (0);
		}
	} return (1);
}
