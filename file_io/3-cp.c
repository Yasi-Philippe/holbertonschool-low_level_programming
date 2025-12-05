#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Makes a copy of a file.
 * @argc: Number of arguments.
 * @argv: array containing the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	ssize_t fd_from, fd_to, w, c1, c2;
	char buffer[10000];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd_to, buffer, sizeof(buffer));
	if (fd_to == -1 || w != -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	c1 = close(fd_from);
	c2 = close(fd_to);
	if (c1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s", c1);
		exit(100);
	}
	if (c2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s", c2);
		exit(100);
	}
	return (0);
}
