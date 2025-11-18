#include "function_pointers.h"

/**
 * array_iterator - Prints the name passed into it.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Format to print the numbers in.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
