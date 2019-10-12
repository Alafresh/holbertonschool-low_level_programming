#include "hash_tables.h"
#include <string.h>
/**
* hash_table_get - Retrieves a value with the hash given
* @ht: the table of hashes
* @key: the key/hash that will be used to find
* Return: the value of the hash
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index, cont;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	for (cont = 0; current != NULL; cont++)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
