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
	char *dup;
	int i;

	while (str[i] != '\0')
		i++;
	ptr = (char *) malloc(i * sizeof(char) + 1);
	if (str == NULL || ptr == NULL)
		return (NULL);
	dup = ptr;
	if (i > 0)
	{
		while (*str)
		{
			*dup = *str;
			dup++;
			str++;
		}
		*dup = '\0';
	}
	else
	*ptr = 0;
		return (ptr);
}
