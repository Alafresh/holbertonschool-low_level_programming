#include "holberton.h"

/**
 * _strstr - finds the first occurrence of th substring.
 * @haystack: main string to be scanned
 * @needle: small string to be searched
 * Return: a pointer to the first occurrence.
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (0);
		}
	haystack++;
	}
return (haystack);
}
