#include "main.h"
/**
 * jack_bauer - Conputes every single hour
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			_putchar(':');
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
			_putchar('\n');
		}
	}
}
