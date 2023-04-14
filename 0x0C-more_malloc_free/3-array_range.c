#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value in the range
 * @max: maximum value in the range
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	size = 0;
	size = max - min;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}

