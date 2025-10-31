#include "main.h"

/**
 * _atoi - Converts a string into an integer.
 * @s: Input string.
 * Return: Integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int mark = 0;

	while (*s)
	{
		if ((*s < 48 || *s > 57) && mark)
			return (i * sign);
		if (*s == '-')
			sign = -sign;
		else if (*s > 48 && *s <= 57)
		{
			i = (*s - 48) + (10 * i);
			mark = 1;
		}
		else if (*s == 48)
			i = 10 * i;
		s++;
	}
	return (i * sign);
}
