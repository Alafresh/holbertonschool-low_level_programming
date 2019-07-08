#include "holberton.h"

/**
* _strncat - concatenates two strings.
* @dest:pointer to the destination array
* @src: string to be appended
* @n: maximum number of characters to be appended.
* Return: a pointer to the resulting string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
