#include "holberton.h"

/**
* _strncpy - function that copies a string.
* @dest: destination array where the content is to be copied
* @src: this is the string to be copied
* @n: the number of characters to be copied.
* Return: start .
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j != n)
	{
		dest[j] = '\0';
		j++;
	}
	return (start);
}
