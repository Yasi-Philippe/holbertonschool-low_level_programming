#include "main.h"

/**
 * print_diagonal - Prints a diagonal
 * @n: Input integer.
 *
 * Return: Void.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 1; b <= a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
