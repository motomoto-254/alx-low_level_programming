#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: string pointer to concatenate to
 * @src: string pointer to concatenate from
 * @n: max number of bytes from src
 *
 * Return: char dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, i;

	x = 0;
	while (dest[x] != '\0')
		x++;
	for (i = 0; src[i] != '\0'; i++)
	{
		if (i <= n)
			_putchar(dest[x + i]);
	}
	return (dest);
}

