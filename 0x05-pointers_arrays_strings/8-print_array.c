#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: name of array
 * @b: size of array
 *
 * Return: void
 */
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		printf("%d", a[i]);
		if (i != (b - 1))
			printf(", ");
	}
	printf("\n");
}
