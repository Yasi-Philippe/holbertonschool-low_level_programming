#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints a defined number of array elements.
 * @a: Input int array.
 * @n: Inut int number of elements to display
 * Return: Void.
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
		if (l != n - 1)
			printf("%d, ", a[l]);
		else
			printf("%d\n", a[l]);
}
