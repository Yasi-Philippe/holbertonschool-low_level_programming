#include <stdio.h>

/**
* main - Print the alphabet wthout the letter ñ
* Return: Always 0
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
