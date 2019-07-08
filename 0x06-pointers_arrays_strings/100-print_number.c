#include "holberton.h"

/**
* print_number - prints an integer
* @n: variable
*/

void print_number(int n)
{
	unsigned int hey = n;

	if (n % 10 < 0)
	{
		_putchar('-');
		hey = -n;
	}
	if (n / 10 != 0)
	{
		print_number(hey / 10);
	}
	_putchar('0' + hey % 10);
}
