#include "holberton.h"
/**
* main - program that copies the content of a file to another file
* @argc: argument count
* @argv: argument vector
* Return: the copies content of a file
*/

int main(int argc, char *argv[])
{
	int inputFd, outputFd;
	ssize_t numRead;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		exit(98);
	}
	inputFd = open(argv[1], O_RDONLY);
	if (inputFd == -1)
	{
		exit(99);
	}
	outputFd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputFd == -1)
	{
		exit(99);
	}
	numRead = read(inputFd, buf, 1024);
	if (numRead == -1)
	{
		exit(99);
	}
	write(outputFd, buf, numRead);
	close(inputFd);
	close(outputFd);
return (0);
}
