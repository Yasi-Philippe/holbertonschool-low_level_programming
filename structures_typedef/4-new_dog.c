#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new variable.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the structure generated. NULL if input is invalid.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t ew_dog;
	dog_t *ptr_dog = &ew_dog;
	char *ptr;
	int l1 = 0, l2 = 0, c, c2 = 0;

	if (!*name || !*owner)
		return (0);
	while (name[l1])
		l1++;
	while (name[l2])
		l2++;
	ptr = malloc(sizeof(char) * (l1 + l2));
	if (!ptr)
	{
		free(ptr);
		return (0);
	}
	for (c = 0; name[c]; c++)
		ptr[c] = name[c];
	ptr[c] = '\0';
	c++;
	for (; owner[c2]; c++)
	{
		ptr[c] = owner[c2];
		c2++;
	}
	ptr[c] = owner[c2];
	(*ptr_dog).name = ptr;
	(*ptr_dog).owner = (ptr + l1 + 1);
	(*ptr_dog).age = age;
	return (ptr_dog);
}
