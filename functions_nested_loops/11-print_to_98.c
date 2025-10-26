#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all integer numbers until 98
 * @n: Integer input
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf (", ");
		}
	else
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
				printf (", ");
		}
	putchar('\n');
}
