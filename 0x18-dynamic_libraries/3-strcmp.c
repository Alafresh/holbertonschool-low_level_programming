#include "holberton.h"

/**
* _strcmp - compares the string.
* @s1: first string
* @s2: second string
* Return: values < 0, > 0, = 0.
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
