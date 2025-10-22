#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Returns the last digit of a number
* and checks whether it's 0 and smaller or bigger than 5
* Return: Always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 5\n", n, n % 10);
	return (0);
}
