#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - function that executes a function given as a parameter.
* @array: data structure.
* @size: is the size of the array
* @action: is a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

