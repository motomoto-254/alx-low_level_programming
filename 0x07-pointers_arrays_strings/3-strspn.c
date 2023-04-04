#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: input string to be compared to
 * @accept: substring to compare in s
 *
 * Return: number of accept bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	unsigned int y;

	y = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				y++;
				break;
			}
		}
		if (!accept[x])
			break;
	}
	return (y);
}

