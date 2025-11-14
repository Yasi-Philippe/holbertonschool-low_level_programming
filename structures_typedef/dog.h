#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for a dog type.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
