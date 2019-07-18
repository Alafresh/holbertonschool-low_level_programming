#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array.
* @nmemb: number of elements to be allocated.
* @size: size of elements
* Return: something
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i = 0, j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc((nmemb + size) * sizeof(unsigned int));
	if (ptr == NULL)
		return (NULL);
	while (j < nmemb)
	{
		while (i < size)
		{
			*ptr = 0;
			i++;
		}
		j++;
	}
return (ptr);
}
