#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog pointer
 *
 * Return:void
 */
void print_dog(struct dog *d)
{
	float i = -1.0;

	if (d == NULL)
		return;

	if ((d->name) != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)\n");
	if ((d->age) != i)
		printf("Age: %f\n", d->age);
	else
		printf("(nil)\n");
	if ((d->owner) != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}

