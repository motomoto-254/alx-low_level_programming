#include <stdio.h>

/**
 * main - print combination of single numbes
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return(0);
}
