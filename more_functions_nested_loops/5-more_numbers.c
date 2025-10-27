#include "main.h"

/**
 * print_most_numbers - Prints all the numbers except 2 and 4.
 *
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('0' + b / 10);
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
