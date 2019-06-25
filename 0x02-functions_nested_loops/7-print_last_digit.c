#include "holberton.h"
/**
* print_last_digit - print the last digit of a number..
* @a: is a value that we going to evaluate.
* Return: Always 0.
*/

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b = -1 * b;
		_putchar(b + '0');
	}
	else
	{
		_putchar(b + '0');
	}
	return (b);
	}
