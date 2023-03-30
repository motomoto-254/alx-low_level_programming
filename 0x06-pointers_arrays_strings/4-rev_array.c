#include "main.h"
/**
 * reverse_array - reverse the content of an array of int
 * @a: array of intgers
 * @n: number of elements to swap
 *
 * Return: viod
 */

void reverse_array(int *a, int n)
{
	int i, x, y;
	int temp[n];

	y = n - 1;
	for (i = y, x = 0; i >= 0 && x <= y; i--, x++)
		temp[x] = a[i];

	for (i = 0; i <= y; i++)
		a[i] = temp[i];
}

