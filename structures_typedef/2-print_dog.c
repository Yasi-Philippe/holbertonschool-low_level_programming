#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the given variable values.
 * @d: Pointer to the structure variable.
 */

void print_dog(struct dog *d)
{
	char *a = "(nil)";

	if (!d)
		return;
	printf("Name: %s\n", (*d).name ? (*d).name : a);
	if ((*d).age)
		printf("Age: %f\n", (*d).age);
	else
		printf("Age: %s\n", a);
	printf("Name: %s\n", (*d).owner ? (*d).owner : a);
}
