#include "holberton.h"

/**
* _memset - fills memory with a constant byte
* @s: Starting address of memory to be filled
* @b: value to be filled
* @n: Number of bytes to be filled starting from *s to be filled.
* Return: the value filled.
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
return (s);
}
