#include "main.h"

/**
 * read_textfile - Writes a text from a file in the standard output.
 * @filename: Name of the file
 * @letters: AMount of letters to print.
 * Return: ssize_t type, letters printed. 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc (sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(fd, buffer, letters);
	free(buffer);
	close(fd);
	if (w == -1 || w != r)
		return (0);
	return (w);
}
