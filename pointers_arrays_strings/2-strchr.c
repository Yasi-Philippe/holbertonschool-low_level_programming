#include "main.h"

/**
 * _strchr - Returns the adress of a specified character in a.
 * @s: Input string.
 * @c: Constant to find in the string.
 *
 * Return: Pointer to the part of the string with the constant specified.
 */
char *_strchr(char *s, char c)
{
	if (!c)
	{
		while (*s)
			s++;
		return (s);
	}
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
