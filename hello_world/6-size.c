#include <stdio.h>

/**
* main - Returns the size of variables
* Return: Always 0
*/

int main(void)
{
	int i;
	float f;
	char c;
	long l;
	long long ll;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(ll));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(f));

	return (0);
}
