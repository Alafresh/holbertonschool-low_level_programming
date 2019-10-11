#include "hash_tables.h"

/**
* hash_table_set - function that adds an element
* @ht: hash table
* @key: is the key
* @value: value associated with the key
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *item;
	int index, flag;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (!current)
	{
		item = malloc(sizeof(hash_node_t));
		if (item == NULL)
			return (0);
		item->key = strdup(key);
		item->value = strdup(value);
		item->next = NULL;
		ht->array[index] = item;
	}
	else
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				current->value = strdup(value);
				flag = 1;
			}
			current = current->next;
		}
		if (flag == 0)
		{
			item = malloc(sizeof(hash_node_t));
			if (item == NULL)
				return (0);
			item->key = strdup(key);
			item->value = strdup(value);
			item->next = ht->array[index];
			ht->array[index] = item;
		}
	}
	return (1);
}
