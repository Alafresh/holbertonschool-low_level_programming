#include "holberton.h"

/**
* print_triangle - print a triangle followed by a new line.
* @size: size of the triangle
* Return: Always 0.
*/

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		a = 0;
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				if (b > size - 2 - a)
				{
					_putchar(35);
				}
				else
				{
					_putchar(' ');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
