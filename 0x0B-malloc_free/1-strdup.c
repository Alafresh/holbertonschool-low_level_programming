#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup -returns a newly allocated space in memory
* @str: contains a copy of the string
* Return: 0
*/

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	while (str[i] != '\0')
		i++;
	ptr = malloc(i * sizeof(char) + 1);
	if (str == NULL || ptr == NULL)
		return (NULL);
		while (str[j] != '\0')
		{
			ptr[j] = str[j];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
}
