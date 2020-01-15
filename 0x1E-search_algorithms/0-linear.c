#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers
* @array: array
* @size: size of array
* @value: value to search
* Return: the index
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
		i++;
	}
	return (-1);
}
