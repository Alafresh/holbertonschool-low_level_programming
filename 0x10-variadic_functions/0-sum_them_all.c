#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: number of arguments
* Return: the sum of all numbers
*/

int sum_them_all(const unsigned int n, ...)
{
	/*create a variable for holding information needed by the three macros*/
	va_list hey;
	double sum = 0.0;
	unsigned int i;

	if (n == 0)
		return (0);

	/*initialize hey for n number of arguments*/
	va_start(hey, n);

	/*access all the arguments assigned to hey*/
	for (i = 0; i < n; i++)
		sum += va_arg(hey, int);

	/*clean memory reserved for hey*/
	va_end(hey);
	return (sum);
}
