#include "main.h"

/**
 * leet - 3NC0D3S INT0 1337
 * @s: Input string.
 * Return: String with 1337 encoding.
 */
char *leet(char *s)
{
	char *ptr = s;
	int n;
	char temp1[] = "aAeEoOtTlL";
	char temp2[] = "43071";

	while (*ptr)
	{
		for (n = 0; n <= 10; n++)
			if (*ptr == temp1[n])
			{
				*ptr = temp2[n / 2];
				break;
			}
		ptr++;
	}
	return (s);
}
