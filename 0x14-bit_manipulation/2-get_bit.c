#include "holberton.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number
* @index: index
* Return: the value of the bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = sizeof(unsigned long int) * 8;

	if (index > mask)
		return (-1);
	return ((n >> index) & 1);
}
