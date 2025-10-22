#include <stdio.h>

/**
* main - Prints all single digit numbers.
* Return: Always 0
*/

int main(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	putchar(a);
	for (a = 'a'; a <= 'f'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
