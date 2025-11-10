#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array and initializes it with a character.
 * @size: size of the array
 * @c: char to initiallize the array with.
 *
 * Return: NULL if size is 0. Pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (!size)
		return (0);
	ptr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return(ptr);
}
