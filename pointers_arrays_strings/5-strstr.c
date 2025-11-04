#include "main.h"

/**
 * _strstr - Returns the first occurence of a matching substring in a string.
 * @haystack: Input string.
 * @needle: Input string to match.
 *
 * Return: Pointer to the beginning of the matching substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int c;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
			for (c = 1;; c++)
			{
				if (haystack[c] == needle[c] && !needle[c + 1])
					return (haystack);
				if (haystack[c] != needle[c])
					break;
			}
		haystack++;
	}
	return (0);
}
