#include "holberton.h"
/**
* err97 - exit with code 97
* @a: is the argc
*/

void err97(int a)
{
	if (a != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
* err98 - exit with code 98
* @ptr: pointer
*/

void err98(char *ptr)
{
	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ptr);
;
		exit(98);
	}
}

/**
* main - program that copies the content of a file to another file
* @argc: argument count
* @argv: argument vector
* Return: the copies content of a file
*/
int main(int argc, char *argv[])
{
	int inputFd, outputFd, cloIn, cloOu;
	ssize_t numRead;
	char buf[1024];

	err97(argc);
	err98(argv[1]);
	inputFd = open(argv[1], O_RDONLY);
	if (inputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}
	outputFd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	numRead = read(inputFd, buf, 1024);
	if (numRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}
	write(outputFd, buf, numRead);
	cloIn = close(inputFd);
	if (cloIn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cloIn);
		exit(100);
	}
	cloOu = close(outputFd);
	if (cloOu == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cloOu);
		exit(100);
	}
return (0);
}
