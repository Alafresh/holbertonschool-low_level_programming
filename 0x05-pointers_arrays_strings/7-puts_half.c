#include "holberton.h"

/**
* puts_half - prints half of a string.
* @str: pointer.
* Return: Always 0.
*/

void puts_half(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) > '4')
		{
			_putchar(str[i]);
		}
	i++;
	}
	_putchar('\n');
}
