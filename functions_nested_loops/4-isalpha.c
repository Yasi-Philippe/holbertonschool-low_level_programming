#include "main.h"
/**
 * _isalpha - checks whether the character is a letter
 * @c: Input character tu run the test in
 * Return: 1 if c is a letter, 0 if it's not.
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
