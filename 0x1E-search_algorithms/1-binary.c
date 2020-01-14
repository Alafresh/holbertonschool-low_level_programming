#include "search_algos.h"
int binary_search(int *array, size_t size, int value)
{
	int tmp;
	size_t low, high, mid;
	low = 0;
	high = size;
	if (array == NULL)
		return (-1);
	while (low < high)
	{
		mid = (low + high) / 2;
		tmp = array[mid];
		print_array(array, high, low);
		if (value == tmp)
		{
			return (array[mid]);
		}
		else if (tmp > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

void print_array(int *array, size_t high, size_t low)
{
	while (low < high)
	{
		printf("%d, ", array[low]);
		low++;
	}
	printf("\n");
}
