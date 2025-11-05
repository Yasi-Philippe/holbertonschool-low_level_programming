#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: Input integer.
 * Return: Integer of the factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}
