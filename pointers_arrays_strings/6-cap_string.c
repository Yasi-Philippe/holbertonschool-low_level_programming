#include "main.h"

/**
 * cap_string - Turns all the first letters of a word into upper case.
 * @str: Input string.
 * Return: String with Uppercases.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	char sep[14] = {9, 10, 21, 32, 34, 40, 41, 44, 46, 59, 63, 123, 124};
	int c = 0;
	int mark = 0;

	if (*ptr >= 97 && *ptr <= 122)
		*ptr -= 32;
	while (*ptr)
	{
		for (c = 0; c <= 12; c++)
			if (*ptr == sep[c])
			{
				mark = 1;
				break;
			}
		ptr++;
		if (*ptr >= 97 && *ptr <= 122 && mark)
			*ptr -= 32;
		mark = 0;
	}
	return (str);
}
