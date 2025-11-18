#include "function_pointers.h"

/**
 * int_index - Finds a specified number.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @cmp: Pointer to the function to use to compare values.
 * Return: 1 if found. -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
