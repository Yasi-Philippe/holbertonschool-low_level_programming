#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints all strings
 * @separator: Separator to print between strings
 * @n: Quantity of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int c;
	char *str;

	va_start(args, n);
	for (c = 0; c < n; c++)
	{
		str = va_arg(args, char *);
		printf("%s", str ? str : "(nil)");
		if (n != c + 1 && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
