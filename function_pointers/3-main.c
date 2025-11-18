#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Calculator
 * @argc: Number of arguments provided to the function.
 * @argv: Pointer to the arguments passed into the program.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char i = *argv[2];
	char j = *(argv[2] + 1);
	int a;

	if (argc != 3)
	{
		for (a = 0; a <= (argc - 1); a++)
			printf("%sError98\n", argv[a]);
		exit(98);
	}
	if (i != '+' || i != '-' || i != '*' || i != '/' || i != '%' || j)
	{
		printf("Error99\n");
		exit(99);
	}
	if (!atoi(argv[2]))
	{
		printf("Error100\n");
		exit(100);
	}
	a = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d", a);
	return (0);
}
