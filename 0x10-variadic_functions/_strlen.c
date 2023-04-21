#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char input variable which point to the address of the start of string
 *
 * Return: int n number of char in string
 */

int _strlen(char *s)
{
        int n;

        n = 0;
        while (*s != '\0')
        {
                n++;
                s++;
        }

        return (n);
}

