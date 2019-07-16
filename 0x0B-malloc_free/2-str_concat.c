#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _length - prints the length of the string
* @s: string whose length is to be found.
* Return: returns the length of strin.
*/

int _length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* str_concat - concatenates two strings.
* @s1: string one.
* @s2: string two.
* Return: the strings.
*/

char *str_concat(char *s1, char *s2)
{
	char *concat, *phrase;
	int i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = _length(s1) + _length(s2);
	phrase = malloc(i * sizeof(char) + 2);

	concat = phrase;
	while (*s1)
	{
		*concat = *s1;
		concat++;
		s1++;
	}
	while (*s2)
	{
		*concat += *s2;
		concat++;
		s2++;
	}
	concat = '\0';
return (phrase);
}
