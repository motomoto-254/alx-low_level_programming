#include "main.h"
/**
 * puts2 - print every other charater of a string
 * @str: pointer to the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int l;

	l = 0;
	while (*str != '\0')
	{
		if (l == 0)
			_putchar(*str);
		else if (l % 2 == 0)
			_putchar(*str);
		l++;
		str++;
	}
	_putchar('\n');
}

