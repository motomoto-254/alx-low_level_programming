#include <stdio.h>
#include <math.h>
/**
 * main - prints largest prime factor
 * Return: zero
 */

int main(void)
{
	long x, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}

