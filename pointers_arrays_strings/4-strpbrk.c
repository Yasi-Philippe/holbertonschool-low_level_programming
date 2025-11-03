#include "main.h"

/**
 * _strpbrk - Returns the bytes matching in a provided string.
 * @s: Input string.
 * @accept: Input string to match.
 *
 * Return: Integer of bytes matching.
 */
char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
			if (*s == accept[c])
				return (s);
		s++;
	}
	return (0);
}
