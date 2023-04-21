#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *str;
	int strlen;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(arg, n);
	
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		printf()
}

