#include <stdio.h>
#include "holberton.h"

/**
* print_sign - prints the sign of a number.
* @n: is the variable to compar.
* Return: 1, -1 or 0 depends of the variable.
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
