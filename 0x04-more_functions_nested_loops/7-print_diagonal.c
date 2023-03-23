#include "main.h"
/**
 * print_diagonal - print n times of space then \
 *
 * @n: Input variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			if (y == x)
				_putchar('\\');
			else if (y < x)
				_putchar(' ');
		}
		_putchar('\n');
	}

}

