#include "main.h"
/**
 * _strcmp - compares two string for similar char in each
 * @s1: string to be compared to
 * @s2: string to compare
 *
 * Return: integer if less than, equal or greater than s1
 */

int _strcmp(char *s1, char *s2)
{
	int i, ret;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			ret = (s1[i] - s2[i]);
		else if (s1[i] == s2[i])
			ret = (s1[i] - s2[i]);
		else
			ret = (s1[i] - s2[i]);
		i++;
	}
	return (ret);
}

