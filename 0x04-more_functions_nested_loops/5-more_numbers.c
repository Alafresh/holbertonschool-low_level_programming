#include "holberton.h"

/**
* more_numbers - print number from 0 to 14.
*
* Return: Always 0.
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
			_putchar(b / 10 + '0');
			}
		_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}
}
