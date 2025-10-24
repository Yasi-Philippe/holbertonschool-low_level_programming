#include "main.h"
/**
 * print_sign - checks the sign of a number
 * @c: Input integer tu run the test in
 * Return: +, 1 if c is a positive number, 0, 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');	
	return (0);
}
