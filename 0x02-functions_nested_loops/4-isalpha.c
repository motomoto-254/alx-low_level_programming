#include "main.h"

/**
 * main - run the _isalpha check
 * Return: 0
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('1');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _isalpha - check if c is a letter
 * @c: input to check the _isalpha function
 *
 * Return: 1 if c is a letter, else 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

