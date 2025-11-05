#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string.
 * @s: Input pointer to the string to return the lenght.
 * Return: Void.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
