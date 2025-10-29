#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to concatenate.
 * Return: Void.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int m;

	while (dest[l] != '\0')
		l++;
	for (m = 0; m <= n - 1; m++)
	{
		if (src[m] == '\0')
		{
			dest[l] = '\0';
			return (dest);
		}
		else
		{
			dest[l] = src[m];
			l++;
		}
	}
	return (dest);
}
