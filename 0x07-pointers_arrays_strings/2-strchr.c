#include "main.h"
#define NULL ((void *)0)
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character which would be searched in string
 *
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}

