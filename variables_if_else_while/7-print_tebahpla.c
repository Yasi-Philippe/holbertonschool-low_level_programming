#include <stdio.h>

/**
* main - Prints all single digit numbers.
* Return: Always 0
*/

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	putchar(a);
	putchar('\n');
	return (0);
}
