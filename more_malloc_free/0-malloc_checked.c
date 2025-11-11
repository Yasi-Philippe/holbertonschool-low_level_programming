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

	ptr = malloc(b);
	if (!ptr)
		return (0);
	return (ptr);
}
