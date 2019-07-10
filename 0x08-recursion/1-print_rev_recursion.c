#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s: pointer.
 */

void _print_rev_recursion(char *s)
{
	int b;

	s++;
	if (*s != '\0')
		_print_rev_recursion(s);
	b = '\0';
	if (s[b] >= 0)
	{
		b--;
		_putchar(s[b]);
	}
}