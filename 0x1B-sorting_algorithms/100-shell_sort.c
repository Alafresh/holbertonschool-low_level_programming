#include "sort.h"
/**
* shell_sort - function that sorts an array of integers
* @array: array
* @size: size of array
*/

void shell_sort(int *array, size_t size)
{
	unsigned int knuth, i, j, arrays;

	knuth = 1;
	while (knuth < size / 3)
		knuth = 3 * knuth + 1;

	while (knuth > 0)
	{
		for (i = knuth; i < size; i += knuth)
		{
			for (j = i; j > 0 && array[j] < array[j - knuth]; j -= knuth)
			{
				arrays = array[j];
				array[j] = array[j - knuth];
				array[j - knuth] = arrays;
			}
		}
		knuth = (knuth - 1) / 3;
		print_array(array, size);
	}
}
