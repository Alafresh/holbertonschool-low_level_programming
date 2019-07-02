#include "holberton.h"

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
