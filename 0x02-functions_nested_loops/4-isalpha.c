#include "main.h"

/**
 * _isalpha - check if c is a letter
 * @c: input to check the _isalpha function
 *
 * Return: 1 if c is a letter, else 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

