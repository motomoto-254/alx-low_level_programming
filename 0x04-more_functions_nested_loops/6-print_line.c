#include "main.h"
/**
 * print_line - print underscore n times
 * @n: input variable
 * Return: void
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');

}

