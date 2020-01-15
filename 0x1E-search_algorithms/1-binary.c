#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array
 * @array: array of integers
 * @size: the size of array
 * @value: the value to search
 * Return: Index or -1 if fails
 */

int binary_search(int *array, size_t size, int value)
{
	int tmp;
	size_t low, high, mid;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		tmp = array[mid];
/*		printf("This low: %lu, this high: %lu\n", low, high);*/
		print_array(&array[low], high, low);
		if (value == tmp)
			return (array[mid]);
		else if (tmp > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

/**
 * print_array - print array
 * @high: the index greatest
 * @low: index lowest
 * @array: array of integers
*/

void print_array(int *array, size_t high, size_t low)
{
	size_t res, i;

	i = 0;
	res = high - low;
	printf("Searching in array: ");
	while (i < res)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}
