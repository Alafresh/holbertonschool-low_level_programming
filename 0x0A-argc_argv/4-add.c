#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int i, j = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			if (argv[i][j] < 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

