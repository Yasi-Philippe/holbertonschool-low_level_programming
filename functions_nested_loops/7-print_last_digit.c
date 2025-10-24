#include "main.h"
/**
 * print_last_digit - Computes the absolute number of a number
 * @n: Integer to make the test in.
 * Return: returns the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n > 0)
		return (n % 10);
	return (-(n % 10));
}
