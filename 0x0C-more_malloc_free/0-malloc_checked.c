#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of mem allocation
 *
 * Return: pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	int *string;

	string = malloc(b);
	if (string == NULL)
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
	}
	return (string);
	free(string);
}

