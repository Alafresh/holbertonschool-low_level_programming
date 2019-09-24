#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: where the content is to be copied.
 * @src: source of the data to be copied
 * @n: number of bytes to be copied.
 * Return: a pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont = 0;

	while (cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
return (dest);
}
