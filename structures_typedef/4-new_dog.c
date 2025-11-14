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
	dog_t *ptr_dog;
	int l1 = 0, l2 = 0, c;

	if (!*name || !*owner)
		return (0);
	while (name[l1])
		l1++;
	while (name[l2])
		l2++;
	ptr_dog = malloc(sizeof(dog_t));
	if (!ptr_dog)
		return (0);
	(*ptr_dog).name = malloc(l1);
	if (!(*ptr_dog).name)
	{
		free(ptr_dog);
		return (0);
	}
	(*ptr_dog).owner = malloc(l2);
	if (!(*ptr_dog).owner)
	{
		free((*ptr_dog).name);
		free(ptr_dog);
		return (0);
	}
	for (c = 0; name[c]; c++)
		(*ptr_dog).name[c] = name[c];
	(*ptr_dog).name[c] = '\0';
	for (c = 0; owner[c]; c++)
		(*ptr_dog).owner[c] = owner[c];
	(*ptr_dog).owner[c] = '\0';
	(*ptr_dog).age = age;
	return (ptr_dog);
}
