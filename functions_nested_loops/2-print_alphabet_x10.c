#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0.
 */
int print_alphabet_x10(void)
{
	char a;
	char c;

	for (a = 1; a <= 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
	return (0);
}
