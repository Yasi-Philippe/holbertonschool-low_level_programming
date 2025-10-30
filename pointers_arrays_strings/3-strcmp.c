#include "main.h"

/**
 * _strcmp - Compares two strings and returns the ASCII difference.
 * @s1: First string to compare
 * @s2: Second string to compare.
 * Return: The difference in ASCII of the first different character. 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
