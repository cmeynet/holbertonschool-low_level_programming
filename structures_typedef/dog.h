#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Combine data items of
 * different kinds
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: ID of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
