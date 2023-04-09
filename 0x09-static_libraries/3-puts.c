#include "main.h"

/**
 * _puts - print the string input
 * @str: pointer to input variable
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

