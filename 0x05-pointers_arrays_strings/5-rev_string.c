#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to the string
 * return: void
 */

void rev_string(char *s)
{
	int n, l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (n = l - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

