#include "main.h"

/**
 * _isupper - check input if is uppercase
 * @c: input variable
 *
 * Return: x
 */

int _isupper(int c)
{
	int x;

	if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}
	else
		x = 0;

	return (x);

}

