#include <stdio.h>

/**
 * main - print alphabets except for q and e
 * Result: zero to satisfy requirement
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || 'e')
		{
			i++;
		}
		else
			putchar(i);
		putchar('\n');
	}
	return (0);
}
