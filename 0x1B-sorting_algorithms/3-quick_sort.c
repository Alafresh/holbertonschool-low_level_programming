#include "sort.h"

int lomuto(int *array, int low, int high)
{
	int pivot, i, j;
	i = low;
	pivot = array[high];
	for (j = low; j < high - 1; j++)
	{
		if (array[j] < pivot)
		{
			swap_int(&array[i], &array[j]);
			print_array(array, high + 1);
			i++;
		}
	}
	swap_int(&array[i], &array[high]);
		print_array(array, high + 1);
	return i;
}

void quickSort(int *array, int l, int h)
{
	int pi;
	if (l < h)
	{
		pi = lomuto(array, l, h);
		quickSort(array, l, pi - 1);
		quickSort(array, pi + 1, h);
	}
}

void quick_sort(int *array, size_t size)
{
	int low, high;

	high = size - 1;
	low = 0;
	quickSort(array, low, high);
}
