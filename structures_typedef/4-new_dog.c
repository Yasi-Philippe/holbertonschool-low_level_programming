#include "dog.h"
#include <stdio.h>

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
	dog_t *ptr = &ew_dog;

	if (!*name || !*owner)
		return (0);
	(*ptr).name = name;
	(*ptr).owner = owner;
	(*ptr).age = age;

	return (ptr);
}
