#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_c - print a char
* @list: arg from format.
*/

void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
* print_i - print a integer
* @list: arg from format
*/

void print_i(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
* print_f - print a float
* @list: arg from format
*/

void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
* print_s - print a string
* @list: arg from format
*/

void print_s(va_list list)
{
	printf("%s", va_arg(list, char*));
}

/**
* print_all - function that prints anything
* @format: is a list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;

	holby pri[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
		};
	va_start(args, format);
	while (format != NULL && format[i])
	{
		while (pri[j].mat != NULL)
		{
			if (format[i] == *(pri[j]).mat)
			{
				pri[j].g(args);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
}
