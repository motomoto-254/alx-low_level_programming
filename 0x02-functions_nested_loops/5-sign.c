#include "main.h"

/**
 * main - runs the print_sign function
 * Return: zero
 */

int main(void)
{
	int x;

	x = print_sign(9);
	_putchar(x + '0');
	_putchar('\n');
	x = print_sign(-2);
	_putchar(x + '0');
	_putchar('\n');
	x = print_sign(0);
	_putchar(x + '0');
	_putchar('\n');
	return (0);
}

/**
 * print_sign - checks number if zero, less than or greater than zero
 * @n: input variable for checks
 *
 * Return: 1 if greater than 0, 0 if 0, -1 if < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0 + 0);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}

