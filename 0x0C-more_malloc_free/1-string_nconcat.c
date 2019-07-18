#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _length - this function count the length of the string.
* @s: the string.
* Return: the length of string
*/

int _length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: variable
* Return: the string concatenate
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *concat;
	unsigned int c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= (unsigned int)_length(s2))
	{
		n = _length(s2);
	}
	ptr = malloc((_length(s1) + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	concat = ptr;
	while (*s1)
	{
		*concat = *s1;
		concat++;
		s1++;
	}
	while (c < n)
	{
		*concat += *s2;
		concat++;
		s2++;
		c++;
	}
	concat = '\0';
return (ptr);
}
