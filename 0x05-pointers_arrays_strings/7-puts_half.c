#include "holberton.h"

/**
* puts_half - prints half of a string.
* @str: pointer.
* Return: Always 0.
*/

void puts_half(char *str)
{
	int i, a, tmp;

	i = 0;
	while (*(str + i) != '\0')
	{
	i++;
	}
	tmp = i;
	i = i / 2;
	if (*(str + tmp) % 2 != 0)
		i = (i - 1) / 2;
	while (*(str + a) != '\0')
	{
		if (a >= i)
			_putchar(*(str + a));
	a++;
	}
	_putchar('\n');
}
