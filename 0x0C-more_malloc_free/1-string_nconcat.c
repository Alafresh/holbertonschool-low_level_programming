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
	char *ptr;
	unsigned int num1, num2, i = 0,  j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	num1 = _length(s1);
	num2 = _length(s2);
	if (n >= num2)
	{
		n = num2;
	}
	ptr = malloc((num1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
return (ptr);
}
