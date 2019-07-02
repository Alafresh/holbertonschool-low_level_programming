#include "holberton.h"

/**
* print_rev - prints a string in reverse.
* @s: the pointer
* Return: Always 0.
*/

void print_rev(char *s)
{
	int cont;

	cont = 0;
	while (*s != '\0')
	{
		s++;
		cont++;
	}
	while (cont != 131)
	{
		--s;
		cont++;
		_putchar(*s);
	}
	_putchar('\n');
}
