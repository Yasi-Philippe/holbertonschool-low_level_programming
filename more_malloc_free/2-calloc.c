#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - CAllocates memory and initializes it.
 * @nmemb: Quantity of elements to allocate.
 * @size: Size of each element.
 *
 * Return: - Pointer to allocated memory. Null if unseccessful.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int c;

	if (!nmemb || !size)
		return (0);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	for (c = 0; c < (nmemb * size); c++)
	ptr[c] = '\0';
	return (ptr);
}
