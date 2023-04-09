#include "main.h"
#define NULL ((void *)0)
/**
 * _strstr - function finds first occurrence of substring needle in haystack
 * @haystack: sting being searched
 * @needle: string to check the occurance
 *
 * Return: pointer to the beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;
	char *temp;

	i = 0;
	x = 0;
	temp = NULL;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[x])
		{
			x++;
			if (needle[x] == '\0')
			{
				temp = &haystack[i - x + 1];
			}
		}
		else
		{
			x = 0;
		}
		i++;
	}
	return (temp);
}

