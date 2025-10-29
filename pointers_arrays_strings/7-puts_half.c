#include "main.h"

/**
 * puts_half - Prints the last half of the character.
 * @str: Input string.
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int l = 0;
	int a;

	while (str[l] != '\0')
		l++;
	for (a = (l + 1) / 2; a < l; a++)
		_putchar(str[a]);
	_putchar('\n');
}
