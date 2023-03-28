#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, to buffer pointed to by dest
 * @dest: buffer
 * @src: string
 *
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x] = '\0';

	return (dest);
}

