#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer being pointed to
 * @b: constant byte
 * @n: size byte
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *mem_pointer;
	unsigned int i;

	mem_pointer = s;
	for (i = 0; i < n; i++)
	{
		mem_pointer[i] = b;
	}
	return (s);
}

