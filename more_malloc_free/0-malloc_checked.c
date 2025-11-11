#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates specified memory.
 * @b: Pointer to the allocated memory.
 *
 * Return: - Pointer to allocated memory. 98 if unsuccessful.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	int *ptr2;
	int x = 98;

	ptr2 = &x;
	ptr = malloc(b);
	if (!ptr)
		return (ptr2);
	return (ptr);
}
