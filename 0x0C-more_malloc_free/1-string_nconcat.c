#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: max number of bytes from s2
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int x, y, i;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	x = 0;
	while (s1[x] != '\0')
		x++;
	y = 0;
	while (s2[y] != '\0')
		y++;
	if (n >= y)
		n = y;
	string = malloc(sizeof(char) * (x + n));
	if (string == NULL)
	{
		return (NULL);
	}
	i = 0;
	while(i < x)
	{
		string[i] = s1[i];
		i++;
	}
	n = n + x;
	y = 0;
	while (i < n)
	{
		string[i] = s2[y];
		y++;
		i++;
	}
	return (string);
}

