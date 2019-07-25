#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - execute various operations + * - / %
* @argc: argument count
* @argv: argument vector
* Return: the result
*/

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-")
	!= 0 && strcmp(argv[2], "/") != 0 && strcmp(argv[2], "*")
	!= 0 && strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (get_op_func(argv[2])(a, b)));
return (0);
}
