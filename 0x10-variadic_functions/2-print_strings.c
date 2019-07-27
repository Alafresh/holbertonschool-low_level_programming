#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *a;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(str, char*);
		if (separator == NULL)
		{
			separator = "";
		}
		if (a == NULL)
		{
			a = "(nil)";
		}
		if (i + 1 == n)
		{
			printf("%s\n", a);
			break;
		}
		printf("%s%s", a, separator);
	}
	va_end(str);
}
