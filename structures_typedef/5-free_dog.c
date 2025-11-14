#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a structure.
 * @d: Pointer to the structure to free.
 */

void free_dog(dog_t *d)
{
	if (!d)
		return (0);
	free((*d).name);
	free((*d).owner);
	free(d);
}
