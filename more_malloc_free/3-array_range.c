#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Allocates an array with specified integers.
 * @min: Min integer.
 * @max: Max integer.
 *
 * Return: - Pointer to allocated memory. Null if unseccessful.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int c;

	if (min > max)
		return (0);
	ptr = malloc(max - min + 1);
	if (!ptr)
		return (0);
	for (c = 0; c <= (max - min); c++)
		ptr[c] = min + c;
	return (ptr);
}
