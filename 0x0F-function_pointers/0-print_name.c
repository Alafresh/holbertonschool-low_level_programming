#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: the name we will print.
* @f: pointer to function.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
