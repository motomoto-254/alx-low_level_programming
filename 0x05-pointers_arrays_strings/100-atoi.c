#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to the input string
 *
 * Return: int formed from the char string
 */

int _atoi(char *s)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		else
		{
			;
		}
	}
	return (result * sign);
}

