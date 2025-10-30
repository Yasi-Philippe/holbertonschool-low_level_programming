#include "main.h"

/**
 * string_toupper - Turns into upper case any lower case letters.
 * @str: Input string.
 * Return: String with Uppercases.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 97 && *ptr <= 122)
			*ptr -= 32;
		ptr++;
	}
	return (str);
}
