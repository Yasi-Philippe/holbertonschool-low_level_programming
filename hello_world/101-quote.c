#include <stdio.h>

/**
* main - Returns the size of variables
* Return: Always 0
*/

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	size_t length = strlen(str);

	for (size_t i = 0; i < length; i++)
		putchar(str[i]);
	return (1);
}
