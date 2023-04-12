#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns pointer to a copy of the string
 * @str: string
 *
 * Return: pointer to a copy of string
 */

char *_strdup(char *str)
{
	char *string;
	int len, i;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	string = malloc((sizeof(char) * len) + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		string[i] = str[i];
	}
	string[i] = '\0';
	return (string);
	free(string);
}

