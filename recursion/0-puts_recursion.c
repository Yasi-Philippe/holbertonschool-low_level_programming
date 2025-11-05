#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Input pointer to the string to print.
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s++)
		_puts_recursion(s);
	else
		_putchar('\n');
}
