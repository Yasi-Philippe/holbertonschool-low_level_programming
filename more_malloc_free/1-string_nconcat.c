#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First input string
 * @s2: Second input string.
 * @n: Bytes to copy from the second string.
 *
 * Return: - Pointer to allocated memory. Null if unseccessful.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int c1 = 0, c2 = 0, i;

	while (s1 && s1[c1])
		c1++;
	while (s2 && s2[c2])
	{
		c2++;
		if (n == c2 - 1)
		{
			c2 = n;
			break;
		}
	}
	ptr = malloc(c1 + c2 + 1 * sizeof(char));
	if (ptr == NULL)
		return (0);
	for (i = 0; i < c1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < c2; i++)
		ptr[i + c1] = s2[i];
	ptr[c1 + c2] = '\0';
	return (ptr);
}
