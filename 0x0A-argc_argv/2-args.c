#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print all arguments it receives
 * @argc: number of arguements
 * @argv: pointer to arguement strings
 *
 * Return: int zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

