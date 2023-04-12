#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Null or pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int len_s1, len_s2, x, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;
	len_s2 = 0;
	while (s2[len_s2] != '\0')
		len_s2++;
	string = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (string == NULL)
		return (NULL);
	for (x = 0; x < len_s1; x++)
	{
		string[x] = s1[x];
	}
	for (i = 0; i < len_s2; i++)
	{
		string[x] = s2[i];
		x++;
	}
	return (string);
	free(string);
}

