#include "holberton.h"

/**
* print_most_numbers - prints the numbers  from 0 to 9 but don't print 2 and 4.
*
* Return: Always 0.
*/

void print_most_numbers(void)
{
	int num;

	num = 48;
	do {
		if (num == 50 || num == 52)
		{
			num++;
			continue;
		}
		_putchar(num);
		num++;
}	while (num <= 57);
	_putchar('\n');
}
