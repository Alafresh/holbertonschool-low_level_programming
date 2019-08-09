#include "holberton.h"

/**
* set_bit - function that sets the value of a bit to 1
* @n: number
* @index: index
* Return: 1 worked or -1 error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = sizeof(unsigned long int) * 8;

	if (index > mask)
		return (-1);
	*n |= 1 << index;
	return (1);
}
