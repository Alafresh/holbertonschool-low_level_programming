#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it.
 * @size: size of array
 * @c: specific char.
 * Return: null or pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
		while (str[i] == 0)
		{
			str[i] = c;
			i++;
		}
	return (str);
}
