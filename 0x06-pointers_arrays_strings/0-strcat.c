#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: string to be appended to
 * @src: string which would be appended to the end of dest
 *
 * Return: char pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int x, i;

	x = 0;
	while (dest[x] != '\0')
		x++;
	for (i = 0; src[i] != '\0'; i++)
	{
		_putchar (dest[x + i]);
	}
	dest[x + i] = '\0';
	return (dest);
}

