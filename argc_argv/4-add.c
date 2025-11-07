#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the sum of two positive numbers.
 * @argc: Lenght of the arguments of the command.
 * @argv: Pointer to the command argument array.
 * Return: Always 0 (Success!).
 */

int main(int argc, char *argv[])
{
	int sum = 0, c1, c2 = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (c1 = 1; c1 < argc; c1++)
	{
		while (argv[c1][c2])
		{
			if (!isdigit(argv[c1][c2]))
			{
				printf("Error\n");
				return (1);
			}
			c2++;
		}
		sum += atoi(argv[c1]);
	}
	printf("%d\n", sum);
	return (0);
}
