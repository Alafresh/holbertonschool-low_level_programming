#include "holberton.h"

/**
 * _strspn - locate a substring.
 * @s: main string to be scanned
 * @accept: containing a list of characters
 * Return: returns the number of characters .
 */

unsigned int _strspn(char *s, char *accept)
{
	int cont = 0;
	int size = 0;
	int i;

	while (s[size] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[size] == accept[i])
			{
				cont++;
				break;
			}
		}
		if (accept[i] == '\0')
			break;
	size++;
	}
return (cont);
}
