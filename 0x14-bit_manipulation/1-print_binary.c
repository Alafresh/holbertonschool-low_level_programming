#include "holberton.h"

/**
* printaux - function that prints the binary representation of a number
* @n: binary number
*/

void printaux(unsigned long int n)
{
	if (n == 0)
		return;
	if (n > 1)
		printaux(n >> 1);
	_putchar('0' + (n & 1));
}
/**
* print_binary - function that prints the binary representation
* @n: binary number
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	printaux(n);
}
