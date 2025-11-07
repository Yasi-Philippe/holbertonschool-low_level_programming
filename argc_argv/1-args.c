#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Lenght of the arguments of the command.
 * @argv: Pointer to the command argument array.
 * Return: Always 0 (Success!).
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
