#include "sort.h"

/**
* find_max - find largest number in array
* @array: array
* @size: size of array
* Return: the largest number
*/

int find_max(int *array, size_t size)
{
	unsigned int i;
	int max;

	max = 0;
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
* counting_sort - sorts an array of integers
* @array: array
* @size: size of array
*/

void counting_sort(int *array, size_t size)
{
	int i, j, max, *c;

	if (size < 2)
		return;
	if (array == NULL)
		return;
	max = find_max(array, size);
	c = malloc(sizeof(int) * (max + 1));

	for (i = 0; i < max + 1; i++)
		c[i] = 0;
	for (i = 0; (unsigned int)i < size; i++)
		c[array[i]]++;
	i = 0;
	j = 0;
	print_array(c, max + 1);
	while (j < max + 1)
	{
		if (c[j] > 0)
		{
			array[i++] = j;
			c[j]--;
		}
		else
		{
			j++;
		}
	}
	free(c);
}
