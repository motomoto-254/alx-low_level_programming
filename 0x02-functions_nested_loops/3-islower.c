#include "main.h"

/**
 * main - runs checks on letter and prints results
 * Return: zero
 */

int main(void)
{
	int r;

	r = _islower('M');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower('T');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - checks for lowercase
 * @c: character to check islower
 *
 * Return: 1 if c is lowercase; else 0
 */

int _islower(int c)
{
	int x;

	if (c >= 'a' && c <= 'z')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}

