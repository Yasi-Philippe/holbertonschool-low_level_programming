#include "main.h"
/**
 * times_table - Prints a 9x9 timetable
 *
 * Return: Void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b == 0 || a == 0)
				_putchar('0');
			else
			{
				if ((a * b) / 10 != 0)
					_putchar('0' + (a * b) / 10);
				else
					_putchar(' ');
				_putchar('0' + (a * b) % 10);
			}
			if (b != 9)
				_putchar(',');
			if (b != 9)
				_putchar(' ');
			if (a == 0)
				_putchar(' ');
			if (b == 9)
				_putchar('\n');
		}
	}
}
