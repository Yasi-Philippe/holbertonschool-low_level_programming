#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Input pointer to the chessboard.
 *
 * Return: Void.
 */
void print_chessboard(char (*a)[8])
{
	int c1, c2;

	for (c1 = 0; c1 <= 7; c1++)
	{
		for (c2 = 0; c2 <= 7; c2++)
			_putchar(a[c1][c2]);
		_putchar('\n');
	}
}
