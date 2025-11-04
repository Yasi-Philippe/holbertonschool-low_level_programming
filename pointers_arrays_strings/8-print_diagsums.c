#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Returns the sum of the two diagonals.
 * @a: Input pointer.
 * @size: Integer that shows the size of the square.
 * Return: Void.
 */
void print_diagsums(int *a, int size)
{
	int c1;
	int d1, d2;

	for (c1 = 0; c1 < size; c1++)
	{
		d1 += a[c1 * (size + 1)];
		d2 += a[(c1 + 1) * (size - 1)];
	}
	printf("%d, %d\n", d1, d2);
}
