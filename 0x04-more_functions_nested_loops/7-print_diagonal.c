#include "holberton.h"

/**
* print_diagonal - draws a diagonal line on the terminal..
* @n: is the number of times the character
* Return: Always 0.
*/

void print_diagonal(int n)
{
	int a;
	int c;

	if (n <= 0)
	{
	_putchar('\n');
	}
		for (a = 0; a < n; a++)
		{
			for (c = 0; c < a; c++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
