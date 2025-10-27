#include "main.h"

/**
 * swap_int - Swaps two variables.
 * @a: Input first variable to swap.
 * @b: Input second variable to swap.
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
