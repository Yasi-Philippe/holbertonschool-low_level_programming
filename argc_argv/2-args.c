#include <stdio.h>

/**
 * main - Prints all arguments passed into it.
 * @argc: Lenght of the arguments of the command.
 * @argv: Pointer to the command argument array.
 * Return: Always 0 (Success!).
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c <= argc - 1; c++)
		printf("%s\n", argv[c]);
	return (0);
}
