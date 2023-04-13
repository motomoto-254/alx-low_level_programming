#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array of int
 * @width: columns of array
 * @height: rows of array
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int row, col, i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	row = height;
	col = width;
	array = (int **)malloc(sizeof(int *) * row);
	for (i = 0; i < row; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * col);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
	for (i = 0; i < row; i++)
		free(array[i]);
	free(array);
}

