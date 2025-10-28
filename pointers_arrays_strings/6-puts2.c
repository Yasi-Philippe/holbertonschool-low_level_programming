#include "main.h"

/**
 * puts2 - Prints one in two characters.
 * @str: String to print.
 *
 * Return: Void.
 */
void puts2(char *str)
{
	int a = 2;

	for (; *str != '\0'; str++)
	{
		if (a % 2 == 0)
			_putchar(*str);
		a++;
	}
	_putchar('\n');
}
