#include <stdlib.h>
#include <stdio.h>
/**
* main - print opcodes of its own main function
* @argc: argument count
* @argv: argument vector
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	if (atoi(argv[1] < 0))
	{
		printf("Error\n");
		exit(2);
	}
	if (argc != 2)
	{
		printf("Errot\n");
		exit(1);
	}
return (0);
}
