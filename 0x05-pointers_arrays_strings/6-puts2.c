#include "holberton.h"

/**
* puts2 - prints one char out of 2 of a string
* @str: pointer
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
