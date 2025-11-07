#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: Lenght of the arguments of the command.
 * @argv: Pointer to the command argument array.
 * Return: Always 0 (Success!).
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
