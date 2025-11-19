#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints all numbers provided.
 * @separator: Separator to print between numbers
 * @n: Quantity of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int c;

	va_start(args, n);
	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(args, int));
		if (n != c + 1 && separator)
			printf("%s", separator);
	}
	putchar('\n');
}
