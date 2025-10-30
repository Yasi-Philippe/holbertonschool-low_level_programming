#include "main.h"

/**
 * reverse_array - Reverses an integer array.
 * @a: Pointer to the integer array
 * @n: Size of the integer array.
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int temp[1000];
	int c;

	for  (c = 0; c < n; c++)
		temp[c] = a[c];
	for (c = 0; c < n; c++)
		a[c] = temp[n - c - 1];
}
