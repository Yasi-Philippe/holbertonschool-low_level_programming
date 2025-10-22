#include <stdio.h>

/**
* main - Print the alphabet wthout the letter ñ (lower case and upper case)
* Return: Always 0
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
