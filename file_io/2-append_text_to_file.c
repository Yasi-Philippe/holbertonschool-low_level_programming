#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends text in a file.
 * @filename: Name of the file
 * @text_content: Content to append in the file.
 * Return: 1 on success. -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[len])
		len++;
	w = write(fd, text_content, len);
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}
