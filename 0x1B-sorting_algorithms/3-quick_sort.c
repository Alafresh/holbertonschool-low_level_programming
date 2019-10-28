#include "sort.h"

int lomuto(int *array, int low, int high)
{
	int pivot, i, j, tmp;
	i = low;
	tmp = 0;
	pivot = array[high];
	for (j = low; j < high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	tmp = array[i + 1];
	array[i + 1] = array[high];
	array[low] = tmp;
	return i + 1;
}

void quick_sort(int *array, size_t size)
{
	int pi;
	int low, high;
	high = size;
	low = 0;

	if (low < high)
	{
		pi = lomuto(array, low, high);
		quick_sort(array, pi - 1);
		quick_sort(array,pi + 1);
	}
}
