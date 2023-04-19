#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function creates a new dog
 * @name: attribute element
 * @age: attribute element
 * @owner: attribute element
 *
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog_var;
	char *new_name, *new_owner;

	dog_var = malloc(sizeof(dog_t));
	if (dog_var == NULL)
		return (NULL);

	new_name = malloc(sizeof(char) * (strcount(name) + 1));
	if (new_name == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
	{
		new_name[i] = name[i];
		i++;
	}
	new_name[i] = '\0';
	dog_var->name = new_name;

	dog_var->age = age;

	new_owner = malloc(sizeof(char) * (strcount(owner) + 1));
	if (new_owner == NULL)
		return (NULL);
	i = 0;
	while (owner[i] != '\0')
	{
		new_owner[i] = owner[i];
		i++;
	}
	new_owner[i] = '\0';
	dog_var->owner = new_owner;

	return (dog_var);
}
/**
 * strcount - count the number of char in string
 * @s: string pointer
 *
 * return: int
 */
int strcount(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

