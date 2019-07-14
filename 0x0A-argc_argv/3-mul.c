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
	int mul, a, b;

	if (argc == 3)
	{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			mul = a * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
