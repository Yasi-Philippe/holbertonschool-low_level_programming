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
	char *ptr = dest;

	while ((*ptr++ = *src++) && n > 1)
		n--;
	for (; n > 1; n--)
	{
		*ptr = '\0';
		ptr++;
	}
	return (dest);
}
