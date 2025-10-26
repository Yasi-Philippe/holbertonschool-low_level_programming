#include <stdio.h>

/**
* main - Prints all the unique two digit combinations
* Return: Always 0
*/

int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (b > a)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
