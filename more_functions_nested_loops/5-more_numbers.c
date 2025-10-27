#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14.
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
