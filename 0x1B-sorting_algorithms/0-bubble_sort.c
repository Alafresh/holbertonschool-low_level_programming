#include "sort.h"

/**
* swap_int - swaps the values of two integers.
* @a: is the integer.
* @b: is the otherone integer
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *b;
	*b = *a;
	*a = n;
}

/**
* bubble_sort - sorts an arrays of integers in ascending order
* @array: array of integer
* @size: of array
*/

void bubble_sort(int *array, size_t size)
{
	int lenght = size;
	int i;
	int j;

	for (i = 0; i < lenght; i++)
	{
		for (j = 0; j < lenght - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_int(&array[j], &array[j + 1]);
			}
		print_array(array, size);
		}
	}
}
