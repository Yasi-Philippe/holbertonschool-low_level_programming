#include "main.h"

/**
 * _memset - Copies a string into another.
 * @dest: Input destination string.
 * @src: Input source string.
 * @n: Input integer.
 * Return: Pointer to the string filled with a constant.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
