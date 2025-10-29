#include "main.h"

/**
 * _strncpy - Copies a string into an adress with a maximum of a certain size.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to copy.
 * Return: Void.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 1;

	if (n <= 0 || *src == '\0')
		return (dest);
	while ((*dest++ = *src++))
	{
		if (c == n)
			return (dest - n);
		c++;
	}
	return (dest - c);
}
