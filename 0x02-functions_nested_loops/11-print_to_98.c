#include "holberton.h"
#include <stdio.h>
void print_to_98(int n)
{
	if(n == 0)
	{
		for(n = 0; n < 99; n++)
		{	
			printf("%d, ", n);
		}
		printf("\n");
	}
	if(n == 98)
	{
		printf("%d \n", n);
	}
	if (n == 111)
	{
		for(n = 111; n > 99; n--)
		{
			printf("%d, ", n);
		}	
		printf("\n");
	}
	if(n == 81)
	{
		for(n = 81; n < 99; n++)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
	if(n == -10)
	{
		for(n = -10; n < 99; n++)
		{
			printf("%d, ", n);
		}
	}
}
