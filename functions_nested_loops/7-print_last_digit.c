#include "main.h"
/**
 * print_last_digit - Computes the absolute number of a number
 * @n: Integer to make the test in.
 * Return: returns the value of the last digit.
 */
int print_last_digit(int n)
{
	int a = (n % 10);

	if (n < 0)
		a = -a;
	_putchar('0' + a);
	return (a);
}
