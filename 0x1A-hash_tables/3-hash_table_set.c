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
	hash_node_t *current;
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
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
		current = ht->array[index];
		while (current != NULL)
		{
			if (!strcmp(ht->array[index]->key, key))
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
				return (1);
			}
			current = current->next;
		}
		item = malloc(sizeof(hash_node_t));
		if (item == NULL)
			return (0);
		item->key = strdup(key);
		item->value = strdup(value);
		item->next = ht->array[index];
		ht->array[index] = item;
	}
	return (1);
}
