#include "holberton.h"
/**
* main - print alphabet in lowercase..
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	int a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
