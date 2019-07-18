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
	char *ptr;
	unsigned int i = 0, hey;

	hey = size * nmemb;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(hey * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < hey)
	{
		ptr[i] = 0;
		i++;
	}
return (ptr);
}
