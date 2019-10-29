#include "sort.h"

/**
* selection_sort - sorts an array of integers
* @array: array
* @size: size
*/

void selection_sort(int *array, size_t size)
{
	int i, j, min, length;

	length = size;
	for (i = 0; i < length; i++)
	{
		min = i;
		for (j = i + 1; j < length; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap_int(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
