#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	if (n % 2 == 0)
	{
		str = str - (n / 2);
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	else
	{
		str = str - ((n - 1) / 2);
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
