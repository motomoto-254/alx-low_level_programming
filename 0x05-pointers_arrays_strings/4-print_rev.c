#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: pointer to the string
 *
 * Return: void:
 */
void print_rev(char *s)
{
	int n;
	int i;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

