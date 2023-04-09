#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer destitation of copy function
 * @src: pointer source of copy function
 * @n: size of the copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

