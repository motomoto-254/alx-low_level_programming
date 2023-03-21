#include "main.h"

/**
*  print_sign - checks number if zero, less than or greater than zero
 * @n: input variable for checks
 *
 * Return: 1 if greater than 0, 0 if 0, -1 if < 0
 */

int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar(0 + '0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}
	return (val);
}

