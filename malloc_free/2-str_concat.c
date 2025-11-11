#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: Input string 1.
 * @s2: Input string 2.
 *
 * Return: Pointer to the string concatenated in the HEAP. 0 if NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int c1 = 0, c2 = 0;

	if (!s1 && !s2)
		return (0);
	if (s1)
		while (s1[c1])
			c1++;
	if (s2)
		while (s2[c2])
			c2++;
	s = malloc((c1 + c2 + 1) * sizeof(char));
	if (s == NULL)
		return (0);
	c1--;
	if (s2)
		for (; c2 >= 0; c2--)
			s[c1 + c2 + 1] = s2[c2];
	else
		c1++;
	for (; c1 >= 0; c1--)
		s[c1] = s1[c1];
	return (s);
}
