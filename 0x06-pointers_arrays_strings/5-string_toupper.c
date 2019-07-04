#include "holberton.h"

/**
*string_toupper - changes letters of a string to uppercase.
* @c: pointer.
* Return: value.
*/

char *string_toupper(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
	if (c[a] >= 'a' && c[a] <= 'z')
		{
		c[a] = c[a] - 32;
		}
	a++;
	}
	return (c);
}
