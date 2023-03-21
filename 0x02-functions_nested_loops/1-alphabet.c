#include "main.h"

/**
 * main - print alphabet in lowercase
 * Return: zero
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print alphabet from a to z
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

