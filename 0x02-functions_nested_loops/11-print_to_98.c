#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - print unti 98.
* @n: is a variable.
* Return: Always 0.
*/

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
