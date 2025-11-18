#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the integers provided.
 * @n: First input integer.
 * Return: Int. The sum of the integers provided.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int c;
	int sum = 0;

	va_start(args, n);
	for (c = 0; c < n; c++)
		sum += va_arg(args, unsigned int);
	return (sum);
}
