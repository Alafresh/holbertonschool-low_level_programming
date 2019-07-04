#include "holberton.h"

/**
* puts_half - prints half of a string.
* @str: pointer.
* Return: Always 0.
*/

void puts_half(char *str)
{
	int i, a, tmp;

	while (*(str + i) != '\0')
	{
		i++;
	}
	tmp = i;
	i = i / 2;
	if (tmp % 2 != 0)
	{
		i++;
	}
	a = 0;
	while (*(str + a) != '\0')
	{
		if (a >= i)
		_putchar(str[a]);
	a++;
	}
	_putchar('\n');
}
