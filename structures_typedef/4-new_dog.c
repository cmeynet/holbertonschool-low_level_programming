#include "dog.h"
/**
 * new_dog - Function that create a new dog
 * @name: name of the dog
 * @age: age the dog
 * @owner: owner of the dog
 *
 * Return: pointer to a new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, len_name = 0, len_owner = 0;

	/* Allocate memory for the structure */
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	while (name[len_name] != '\0')
		len_name++;

	ptr->name = malloc(sizeof(char) * (len_name + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* To copy name in ptr->name */
	for (i = 0; i < len_name; i++)
		ptr->name[i] = name[i];
	ptr->name[len_name] = '\0';

	while (owner[len_owner] != '\0')
		len_owner++;

	ptr->owner = malloc(sizeof(char) * (len_owner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < len_owner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[len_owner] = '\0';

	ptr->age = age;
	return (ptr);
}
