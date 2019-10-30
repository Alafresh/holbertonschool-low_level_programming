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
* lomuto - method implement partition scheme
* @array: array
* @low: is 0
* @high: the size of array - 1
* @size: size of array
* Return: the partition of array
*/

int lomuto(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	i = low;
	pivot = array[high];
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[high] < array[i])
	{
		swap_int(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
* quickSort - function improved
* @array: array
* @l: low
* @h: high
* @size: size of array
*/

void quickSort(int *array, int l, int h, size_t size)
{
	int pi;

	if (l < h)
	{
		pi = lomuto(array, l, h, size);
		quickSort(array, l, pi - 1, size);
		quickSort(array, pi + 1, h, size);
	}
}

/**
* quick_sort - sorts an array of integers
* @array: array
* @size: size of array
*/

void quick_sort(int *array, size_t size)
{
	int low, high;

	high = size - 1;
	low = 0;
	quickSort(array, low, high, size);
}
