#include "holberton.h"

/**
* _strlen - prototype function.
* @s: char pointer.
* Return: the length of a string.
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}
