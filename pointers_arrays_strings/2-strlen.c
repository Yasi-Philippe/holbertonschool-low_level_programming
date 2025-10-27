#include "main.h"

/**
 * _strlen - Provides the lenght of a string.
 * @s: First character in the string to check.
 *
 * Return: The string lenght with an integer number.
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
