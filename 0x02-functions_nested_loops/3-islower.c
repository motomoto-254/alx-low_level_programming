#include "main.h"

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

