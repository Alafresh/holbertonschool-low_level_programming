#include "hash_tables.h"

/**
* hash_table_print - this functions will print hashes Python way
*@ht: a table containing hashes
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int index = 0, positions = 0;

	if (ht)
	{
		printf("{");
		for (; index < ht->size; index++)
		{
			current = ht->array[index];
			if (current == NULL)
			{
				continue;
			}
			while (current)
			{
				if (positions != 0)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				positions++;
			}
		}
	printf("}\n");
	}
}
