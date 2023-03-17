#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - the function generates a random int saved in variable n
 * the if checks if the int is positive, zero or negative
 * Return: zero to satisfy the main variable type
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
