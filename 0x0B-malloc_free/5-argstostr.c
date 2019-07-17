#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i, j, cont;
	char *ptr, *hey;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cont++;
	cont++;
	}
	cont += 1;
	ptr = malloc(sizeof(char) * cont);
	hey = ptr;
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
	*ptr = '\n';
	ptr++;
	}
return (hey);
}
