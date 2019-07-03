#include "holberton.h"

/**
* rev_string - rverses a string
* @s: pointer
* Return: Always 0.
*/

void rev_string(char *s)
{
	int i, j, cont;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		cont = *(s + i);
		s[i] = *(s + j);
		s[j] = cont;
		i--;
	}
}
