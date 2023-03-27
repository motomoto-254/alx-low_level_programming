#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to the string
 * return: void
 */

void rev_string(char *s)
{
	int  x, y;
	char temp;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;
	x = 0;
	while (x < y)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x++;
		y--;
	}
}

