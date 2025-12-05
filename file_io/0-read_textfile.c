#include "main.h"

/**
 * read_textfile - Writes a text from a file in the standard output.
 * @filename: Name of the file
 * @letters: AMount of letters to print.
 * Return: ssize_t type, letters printed. 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    size_t file1;
	ssize_t len;
	char buffer[4096];

	if (!filename)
		return (0);
	file1 = open(filename, O_RDONLY);
	if (!file1)
		return (0);
	read(file1, buffer, sizeof(buffer));
	len = write(file1, buffer, letters);
	if (!len)
		return (0);
	return (len);
}
