#include "main.h"

/**
 * _isdigit - checks variable if is a digit
 * @c: input variable
 *
 * Return: x
 */

int _isdigit(int c)
{
	int x;

	if (c >= '0' && c <= '9')
	{
		x = 1;
	}
	else
		x = 0;

	return (x);

}

