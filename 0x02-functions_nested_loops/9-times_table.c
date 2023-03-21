#include "main.h"

/**
 * times_table - create a multiplication table
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int a;

			a = 0;
			a = i * j;
			if ((a / 10) == 0)
				_putchar('\0');
			else
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			if  (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('$');
				_putchar('\n');
			}
		}
	}
}

