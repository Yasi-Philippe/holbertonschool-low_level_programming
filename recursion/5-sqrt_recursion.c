#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Input integer.
 *
 * Return: Integer.
 */
int _sqrt_recursion(int n)
{
	int a = 10000;

	if (n == 0)
		return (0);
	if (n < 0 || (n / a) * (n / a) > (n % a))
		return (-1);
	n += a;
	if ((n / a) * (n / a) == (n % a))
		return (n / a);
	return (_sqrt_recursion(n));
}
