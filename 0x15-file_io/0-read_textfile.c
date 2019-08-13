#include "holberton.h"

/**
* read_textfile - function that reads a text file and prints it
* @filename: is the file to read
* @letters: is the number of letters it should read and print
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t red;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(letters));
	if (buf == NULL)
	{
		return (0);
		free(buf);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	red = read(fd, buf, letters);
	close(fd);
	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (0);
	write(1, buf, red);
	close(fd);
return (red);
}
