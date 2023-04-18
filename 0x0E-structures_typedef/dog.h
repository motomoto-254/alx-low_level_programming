#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - basic description of a dog
 * @name: member 1
 * @age: member 2
 * @owner: member 4
 *
 * Description: basic traits assigned to a particular dog
 */

type_def struct
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

