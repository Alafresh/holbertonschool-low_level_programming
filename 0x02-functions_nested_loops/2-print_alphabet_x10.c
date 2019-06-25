#include "holberton.h"

/**
* print_alphabet_x10 - display the alphabet 10 times.
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{

	int a;
	int b;

	a = 0;
	while (a <= 9)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;

	}

}
