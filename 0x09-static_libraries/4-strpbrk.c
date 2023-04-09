#include "main.h"
#define NULL ((void *)0)
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string being searched
 * @accept: pointer to string being searched for
 *
 * Return: pointer to the bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;
	char *temp;

	temp = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				temp = &s[i];
				break;
			}
		}
		if (temp != NULL)
			break;
	}
	return (temp);
}

