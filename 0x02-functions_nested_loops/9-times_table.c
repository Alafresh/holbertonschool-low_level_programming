#include "holberton.h"

void times_table(void)
{
	int a, j, num;
	for(a = 0; a <= 9; a++)
	{	
		for(j = 0; j <= 9; j++)
		{
			num = (0 + j) * a;
			if (num > 9)
			{
				_putchar(num/10 + '0');
				_putchar(num%10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (num < 9)
			{ 
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
		}
		_putchar('\n');
	}
}
