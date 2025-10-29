#include "main.h"

/**
 * _strcat - Apends a string to a specified string.
 * @dest: Destination string.
 * @src: Source string.
 * Return: Void.
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int m = 0;

	while (dest[l] != '\0')
		l++;
	while (src[m] != '\0')
	{
		dest[l] = src[m];
		m++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
