#include "holberton.h"

void print_alphabet_x10(void)
{

	int a;
	int b;
	
	a = 0;
	
	while (a <= 9)
	{
		b = 'a';
		while(b <= 'z' )
		{
		
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;

	}

}
