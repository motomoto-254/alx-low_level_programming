#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer a
 * @b: pointer to integer b
 *
 * Return: viod
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

