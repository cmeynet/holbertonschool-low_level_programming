#include "dog.h"
/**
 * init_dog - Function that initialize a variable
 * of type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->age = age;
		d->owner = owner;
	}
}
