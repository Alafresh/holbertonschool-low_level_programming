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
	int i, a, c = 0;

	a = _lenght(s2);
	i = _lenght(s1) + _lenght(s2);
	ptr = malloc(i * sizeof(char) + 1);
	concat = ptr;
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1)
	{
		*concat = *s1;
		s1++;
		concat++;
	}

	if ((int)n >= a)
		while (*s2)
		{
			*concat += *s2;
			concat++;
			s2++;
		}
	while (c < (int)n)
	{
		*concat += *s2;
		concat++;
		s2++;
		c++;
	}
return (ptr);
}
