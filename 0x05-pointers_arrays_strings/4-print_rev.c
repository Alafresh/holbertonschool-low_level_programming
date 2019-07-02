#include "holberton.h"

/**
 * print_rev - print a string in reverse.
 * @s: pointer
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int c, t;

	while (s[c] != '\0')
	{
		c++;
	}

	for (t = c - 1 ; t >= 0; t--)
	{
	_putchar(s[t]);
	}
	_putchar('\n');
}
