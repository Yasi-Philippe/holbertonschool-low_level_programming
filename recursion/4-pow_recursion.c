#include "main.h"

/**
 * _pow_recursion - Returns a number to the power of another.
 * @x: Input integer, base of the power.
 * @y: Input integer, exponent of the power.
 * Return: Integer of the power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
