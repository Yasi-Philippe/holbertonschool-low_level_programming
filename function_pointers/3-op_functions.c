#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Adds two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 * Return: Sum as int type.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Adds two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 * Return: Substraction as int type.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 * Return: Product as int type.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 * Return: Division as int type.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the mod between
 *
 * @a: First integer.
 * @b: Second integer.
 * Return: Mod of the two integers as int type.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
