#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string uppercase
 * @temp: pointer to the string
 *
 * Return: char pointer
 */
char *string_toupper(char *temp)
{
	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp -= ('a' - 'A');
		}
		temp++;
	}
	return (temp);
}

