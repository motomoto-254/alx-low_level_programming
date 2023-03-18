#include <stdio.h>

/**
 * main - print alphabets except for q and e
 * Return: zero to satisfy requirement
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
