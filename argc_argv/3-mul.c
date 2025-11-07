#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers provided to it.
 * @argc: Lenght of the arguments of the command.
 * @argv: Pointer to the command argument array.
 * Return: Always 0 (Success!).
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}
