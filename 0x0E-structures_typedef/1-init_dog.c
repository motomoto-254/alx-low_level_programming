#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable pointer
 * @name: attribute
 * @age: attribute member
 * @owner: attribute member
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	struct dog *variable;

	variable = d;

	if (variable == NULL)
		return;
	variable->name = name;
	variable->age = age;
	variable->owner = owner;
}

