#include "holberton.h"

/**
* print_line - draws diagonal line on the terminal.
* @n: number of times the character.
* Return: Always 0.
*/

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
