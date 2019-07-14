#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 1  if is false.
 */

int main(int argc, char *argv[])
{
	int i, mul, a, b;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			mul = a * b;
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}

