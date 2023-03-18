#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - checks the last stored variable which is checked under if
 * statements expressions and print relevant strings
 * Return: zero to satisfy the int type of the main function
 */

int main(void)
{
	int n;
	int result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	result = (n % 10);
	if (result > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, result);
	}
	else if (result == 0)
	{
		printf("Last digit of %d is %d and is 0", n, result);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, result);
	}

	return (0);
}
