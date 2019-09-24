#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s:string to be scanned
 * @c: character to be searched
 * Return: a pointer to the first occurrence of the character c in string.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
