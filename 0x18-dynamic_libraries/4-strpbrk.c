#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accept: string containing the characters.
 * Return: a pointer to the character in s.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*s != *accept)
		{
			s++;
			return (s + 1);
		}
	}
return (0);
}
