#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Copies a string into the dynamic memory.
 * @str: Input string.
 *
 * Return: Pointer to the string in the HEAP. 0 if NULL.
 */
char *_strdup(char *str)
{
	char *s;
	int c = 0;

	while (str[c])
		c++;
	s = malloc((c + 1) * sizeof(char));
	if (s == NULL)
		return (0);
	for (; c >= 0; c--)
		s[c] = str[c];
	return (s);
}
