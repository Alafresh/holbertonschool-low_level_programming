#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints strings followed by a new line.
* @separator: string printed between strings
* @n: number of sthings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *a;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(str, char*);

		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);
		if ((separator != NULL) && (i + 1 != n))
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
