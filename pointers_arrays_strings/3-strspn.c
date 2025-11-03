#include "main.h"

/**
 * _strspn - Returns the bytes matching in a provided string.
 * @s: Input string.
 * @accept: Input string to match.
 *
 * Return: Integer of bytes matching.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int n;

	while (*s)
	{
		n = 0;
		while (accept[n])
		{
			if (*s == accept[n])
			{
				c++;
				break;
			}
			n++;
		}
		if (!accept[n])
			break;
		s++;
	}
	return (c);
}
