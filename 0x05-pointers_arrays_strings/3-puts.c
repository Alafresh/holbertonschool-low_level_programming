#include "holberton.h"

/**
* _puts - prints a string followed by a new line.
* @str: pointer
* Return: Always 0.
*/

void _puts(char *str)
{
	int cont;
	for (cont = 0; *str != '\0'; cont++)
	{	_putchar(*str);
		str++;
	}
	_putchar('\n');
}
