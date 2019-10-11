#include "hash_tables.h"

/**
* key_index - function that gives you the index of a key
* @key: is the key
* @size: size of the array
* Return: the index at twhich the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;
	unsigned int hash = hash_djb2(key);

	if (key == NULL)
		return (0);
	if (size <= 0)
		return (0);
	while (key && key[i])
	{
		hash = hash % size;
		i++;
	}
	return (hash);
}
