#include "hash_tables.h"
/**
* hash_table_delete - deletes all the hashes and frees everything
* @ht: the table of hashes
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *killer;
	unsigned int index = 0;

	if (ht)
	{
		while (index < ht->size)
		{
			current = ht->array[index];
			while (current != NULL)
			{
				killer = current;
				free(killer->value);
				free(killer->key);
				free(killer);
				current = current->next;
			}
			index++;
			free(current);
		}
		free(ht->array);
		free(ht);
	}
}
