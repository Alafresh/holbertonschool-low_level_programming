#include "holberton.h"

/**
* leet - encode string into 1337
* @mo: pointer
* Return: the result
*/

char *leet(char *mo)
{
	int cont, tmp;
	char arr[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};

	char num[] = {'4', '3', '0', '7', '1'};

	cont = 0;

	while (mo[cont] != 0)
	{
		for (tmp = 0; tmp < 5; tmp++)
		{
			if (mo[cont] == arr[tmp][0] || mo[cont] == arr[tmp][1])
			{
				mo[cont] = num[tmp];
			}
		}
	cont++;
	}
return (mo);
}
