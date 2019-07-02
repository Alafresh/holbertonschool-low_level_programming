#include "holberton.h"

/**
* print_rev - prints a string in reverse.
* @s: the pointer
* Return: Always 0.
*/

void print_rev(char *s)
{
	int cont;

	while (*s != '\0')
	{
		s++;
		cont = 0;
	}
	while (cont <= 73)
	{
		_putchar(*s);
		s--;
		cont++;
	}
_putchar('\n');
}
