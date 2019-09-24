#include "holberton.h"

/**
* _strcpy - copies the string
* @dest: return
* @src: pointer
* Return: value the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
{
		dest[a] = src[a];
	a++;
	}
	dest[a] = '\0';
	return (dest);
}

