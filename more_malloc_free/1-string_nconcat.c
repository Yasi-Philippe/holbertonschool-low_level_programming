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
char *string_nconcat(char *s1, char *s2, int n)
{
	char *ptr;
	int c1 = 0;
	int c2 = 0;

	if (s1)
		while (s1[c1])
			c1++;
	if (s2 && n > 0)
	{
		while (s2[c2] && c2 < n - 1)
			c2++;
		if (!s2[c2])
			c2--;
	}
	ptr = malloc((c1 + c2 + 2) * sizeof(char));
	if (ptr == NULL)
		return (0);
	if (!s1 && !s2)
		return (ptr);
	c1--;
	if (s2)
	{
		ptr[c1 + c2 + 2] = '\0';
		for (; c2 >= 0; c2--)
			ptr[c1 + c2 + 1] = s2[c2];
	}
	else
		c1++;
	for (; c1 >= 0; c1--)
		ptr[c1] = s1[c1];
	return (ptr);
}
