#include <stdio.h>

/**
* main - Prints the alphabet exclusing e and q chars.
* Return: Always 0
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	if (a != 'e' && a != 'q')
		putchar(a);
	putchar('\n');
	return (0);
}
