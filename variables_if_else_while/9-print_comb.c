#include <stdio.h>

/**
* main - Prints all the digits with a space and a comma.
* Return: Always 0
*/

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
	putchar(a);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
