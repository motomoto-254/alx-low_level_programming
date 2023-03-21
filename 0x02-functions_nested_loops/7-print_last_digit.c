#include "main.h"

/**
* print_last_digit - input modolus 10 to find the last digit
* @j: input parameter
*
* Return: x which is the resultant of the modolus operation
*/

int print_last_digit(int j)
{
	int x;

	if (j < 0)
		j = -j;
	x = j % 10;
	_putchar(x + '0');
	return (x);
}

