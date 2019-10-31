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
	int i, max, *c, aux[size];

	if (size < 2)
		return;
	if (array == NULL)
		return;
	max = find_max(array, size);
	c = malloc(sizeof(int) * (max + 1));
	if (c == NULL)
		return;
	for (i = 0; i < max + 1; i++)
		c[i] = 0;
	for (i = 0; (unsigned int)i < size; i++)
		c[array[i]]++;
	for (i = 1; i <= max; i++)
		c[i] += c[i - 1];
	print_array(c, max + 1);
	for (i = 0; (unsigned int)i < size; i++)
	{
		aux[c[array[i]] - 1] = array[i];
		c[array[i]]--;
	}
	 i = 0;
	while (i < (int)size)
	{
		array[i] = aux[i];
		i++;
	}
	free(c);
}
