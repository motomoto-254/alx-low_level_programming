#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: pointer to array of function
 * @size: size of array
 * @action: pointer to the function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

