#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup -returns a newly allocated space in memory
* @str: contains a copy of the string
* Return: 0
*/

char *_strdup(char *str)
{
	char *ptr;
	char *dup;
	int size;

	size = strlen(str);	
	ptr = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	dup = ptr;
	while (*str)
	{
		*dup = *str;
		dup++;
		str++;
	}
	*dup = '\0';
	return (ptr);
}
