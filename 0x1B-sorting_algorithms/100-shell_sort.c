#include "sort.h"
/**
* shell_sort - function that sorts an array of integers
* @array: array
* @size: size of array
*/

void shell_sort(int *array, size_t size)
{
	unsigned int knuth, i, j;
	int arrays;

	if (size < 2)
		return;
	if (array == NULL)
		return;
	knuth = 1;
	while (knuth < size / 3)
		knuth = knuth * 3 + 1;

	while (knuth > 0)
	{
		for (i = knuth; i < size; i++)
		{
			arrays = array[i];
			for (j = i; j > knuth - 1 && array[j - knuth] >= arrays; j -= knuth)
			{
				array[j] = array[j - knuth];
			}
			array[j] = arrays;
		}
		knuth = (knuth - 1) / 3;
		print_array(array, size);
	}
}
