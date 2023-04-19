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

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int strcount(char *s);

#endif

