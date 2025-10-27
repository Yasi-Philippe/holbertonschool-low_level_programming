#include "main.h"

/**
 * _isupper - Checks whether an integer is a digit.
 * @c: Input integer to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
