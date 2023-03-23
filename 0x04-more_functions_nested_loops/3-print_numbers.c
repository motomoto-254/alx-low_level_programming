#include "main.h"

/**
 * print_numbers - functions to print numbers from 0 to 10
 * Return: none/void
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}

