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
	char *start = dest;
	int j = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (j != n && src[j] != '\0')
	{
		*dest = *src;
		src++;
		j++;
		dest++;
	}
	*dest = '\0';
	return (start);
}
