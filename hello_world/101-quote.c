#include <stdio.h>
#include <string.h>

/**
* main - Returns the size of variables
* Return: Always 0
*/

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	size_t i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
