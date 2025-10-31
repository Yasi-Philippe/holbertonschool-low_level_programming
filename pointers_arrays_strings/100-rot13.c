#include "main.h"

/**
 * rot13 - Encodes into Rot13
 * @s: Input string.
 * Return: String with rot13 encoding.
 */
char *rot13(char *s)
{
	char *ptr = s;
	int n;
	char temp1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char temp2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr)
	{
		for (n = 0; n <= 52; n++)
			if (*ptr == temp1[n])
			{
				*ptr = temp2[n];
				break;
			}
		ptr++;
	}
	return (s);
}
