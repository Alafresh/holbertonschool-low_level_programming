#include "holberton.h"

/**
 * _strspn - locate a substring.
 * @s: main string to be scanned
 * @accept: containing a list of characters
 * Return: returns the number of characters .
 */

unsigned int _strspn(char *s, char *accept)
{
	int size = 0;

	while (s[size] != *accept)
	{
		size++;
	}
return (size + 1);
}
