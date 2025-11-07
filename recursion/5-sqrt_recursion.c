#include "main.h"
#include <stdio.h>

/**
 * sqrt_check - Checks whether the square root of a number is a natural number
 * @ptrn: Input integer.
 * @ptr: Integer used to iterate the function.
 * Return: The natural square number. -1 if this number does not exist.
 */

int sqrt_check(int *ptrn, int *ptr)
{
	int **ptr2 = &ptr;
	int **ptrn2 = &ptrn;

	if (**ptr2 * **ptr2 == **ptrn2)
		return (**ptr2);
	if (**ptr2 * **ptr2 > **ptrn2)
		return (-1);
	**ptr2 += 1;
	return (sqrt_check(*ptrn2, *ptr2));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Input integer.
 *
 * Return: Integer.
 */

int _sqrt_recursion(int n)
{
	int a = 1;
	int *ptr = &a;
	int *ptrn = &n;
	int r;

	if (n == 0)
		return (0);
	r = sqrt_check(ptrn, ptr);
	return (r);
}
