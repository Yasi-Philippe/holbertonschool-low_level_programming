#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
* main - Returns the size of variables
* Return: Always 0
*/

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (1);
}
