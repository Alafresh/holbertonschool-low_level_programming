#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array.
* @nmemb: number of elements to be allocated.
* @size: size of elements
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		nmemb = size = 1;
	ptr = malloc((nmemb + size) * sizeof(unsigned int));
	if (ptr == NULL)
		return (NULL);
return (ptr);
}
