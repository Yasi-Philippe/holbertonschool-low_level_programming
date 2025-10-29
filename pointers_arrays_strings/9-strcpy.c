#include "main.h"

/**
 * _strcpy - Copies a string from a specified source to a specified destination
 * @dest: Input int array.
 * @src: Inut int number of elements to display
 * Return: Void.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l + 1] = '\0';
	dest[l + 2] = '\0';
	return (dest);
}
