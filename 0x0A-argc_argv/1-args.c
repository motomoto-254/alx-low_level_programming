#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: count to the arguments
 * @argv: pointer to the argument string
 *
 * Return: int zero
 */
int main(int argc, __attribute__ ((unused)) int *argv[])
{
	int i;

	i = argc - 1;
	printf("%d\n", i);

	return (0);
}
