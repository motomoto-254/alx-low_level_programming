#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of elements in array
 * @c: char to fill array size
 *
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

