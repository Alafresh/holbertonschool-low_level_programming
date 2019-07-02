#include "holberton.h"

/**
* _puts - prints a string followed by a new line.
* @str: pointer
* Return: Always 0.
*/

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
