#include "main.h"

/**
 * _memset - Fills memory with a constant.
 * @s: Input string.
 * @b: Input constant.
 * @n: Input integer.
 * Return: Pointer to the string filled with a constant.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
