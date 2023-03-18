#include <stdio.h>

/**
 * main - print 0 to 9 and hexadecimal alphas
 * Return: zero
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
