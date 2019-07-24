#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - return the index of te first element
* @array: data
* @size: number of elements
* @cmp: is a pointer to the function to be used to compare values
* Return: index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int *ptr = array;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(ptr[i]))
			return (i);
		i++;
	}
	return (-1);
}
