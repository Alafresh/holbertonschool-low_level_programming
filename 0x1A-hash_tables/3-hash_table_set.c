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
	int index;
	int i;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL || key == NULL || value == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	i = 1;
	while (current != NULL)
	{
		index = key_index((unsigned char *)key, ht->size);
		current = ht->array[index];
		i++;
	}
	ht->array[index] =  item;
	return (1);

}
