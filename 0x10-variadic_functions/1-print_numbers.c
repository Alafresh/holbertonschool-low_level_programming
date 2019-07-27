#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function tha prints numbers, followed by a new line
* @separator: is the string to be printed between numbers
* @n: number of integers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pri;
	unsigned int i;
	unsigned int a;

	va_start(pri, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(pri, int);

		printf("%d", a);
		if ((separator != NULL) && (i + 1 != n))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pri);
}

