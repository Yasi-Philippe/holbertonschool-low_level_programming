#include "main.h"
#include <stdio.h>

/**
 * prime_check - Checks whether a number is prime.
 * @a: Input integer.
 * @n: Integer used to iterate the function.
 * Return: 0 if not prime. 1 if prime.
 */

int prime_check(int *a, int *n)
{
	int **a2 = &a;
	int **n2 = &n;

	if ((**n2) % (**a2) == 0)
	{
		return (0);
	}
	if (**a2 >= (**n2) / 2)
	{
		return (1);
	}
	(**a2)++;
	return (prime_check(*a2, *n2));
}

/**
 * is_prime_number - Returns whether a number is prime or not.
 * @n: Input integer.
 *
 * Return: Integer.
 */

int is_prime_number(int n)
{
	int a = 2;
	int *ptr = &a;
	int *ptrn = &n;

	if (n <= 1)
		return (0);
	return (prime_check(ptr, ptrn));
}
