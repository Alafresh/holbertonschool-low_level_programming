#include "holberton.h"

/**
* reverse_array - reverse the content of an array of integers.
* @a: pointer select
* @n: the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int j, cont;

	while (*(a + n) < '\0')
	{
		n++;
	}
	for (j = 0; j < n - 1; j++)
	{
		cont = *(a + n - 1);
		a[n - 1] = *(a + j);
		a[j] = cont;
		n--;
	}

}
