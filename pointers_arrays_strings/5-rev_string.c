#include "main.h"

/**
 * rev_string - Returns a string reversed.
 * @s: String to reverse.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int a = 0, l;
	char temp[1000];

	while (s[a] != '\0')
	{
		temp[a] = s[a];
		a++;
	}

	l = a - 1;
	for (a = 0; a <= l; a++)
	{
		s[a] = temp[l - a];
	}
}
