#include <stdio.h>

/**
 * main - prints the letters a to z using a for loop
 * Return: zero to satisfy the int main type
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
