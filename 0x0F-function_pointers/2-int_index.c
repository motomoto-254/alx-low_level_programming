#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: arrar input arg
 * @size: number of elements in the array
 * @cmp: pointer to function to be used to compre values
 *
 * Return: index to the first element for which cmp doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (size <= 0)
		return (-1);
	i = 0;
	check = 0;
	while ((i < size) || (check != 0))
	{
		if (cmp(array[i]) != 0)
		{
			check = 1;
			return (i);
		}
		i++;
	}
	return (-1);
}

