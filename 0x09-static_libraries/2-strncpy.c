#include "main.h"
/**
 * _strncpy - copy string from src to dest limit n bytes from scr
 * @dest: pointer to string dest
 * @src: pointer to string src
 * @n: number of bytes that limit the src string
 *
 * Return: output points to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

