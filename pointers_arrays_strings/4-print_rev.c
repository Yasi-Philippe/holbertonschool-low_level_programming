#include "main.h"

/**
 * print_rev - Prints a string reversed followed by a new line.
 * @s: String to print.
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
		a++;
	a--;
	for (; a >= -1; s--)
	{
		_putchar(*s);
		a--;
	}
	_putchar('\n');
}
