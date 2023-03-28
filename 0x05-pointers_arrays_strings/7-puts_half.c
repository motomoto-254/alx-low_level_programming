#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, x;

	n = 0;
	x = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	x = n - 1;
	if (x % 2 == 0)
	{
		str = str - (x / 2);
		while (*str != '0')
		{
			_putchar(*str);
			str++;
		}
	}
	else
	{
		str = str - ((x - 1) / 2);
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
