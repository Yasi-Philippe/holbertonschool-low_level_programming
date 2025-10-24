#include "main.h"
/**
 * _islower - checks whether the character is lowercase or not
 * @c: Input character tu run the test in
 * Return: 1 if c is lowercase, 0 if it's not.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
