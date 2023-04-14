#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes to be allocated
 *
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
		array= malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		((unsigned int *)array)[i] = 0;
	}
	return ((unsigned int *)array);
}

