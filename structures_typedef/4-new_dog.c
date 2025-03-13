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
	char *ptr_name, *ptr_owner;
	int i, len_name = 0, len_owner = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	while (name[len_name] != '\0')
		len_name++;
	if (name != NULL)
	{
		ptr_name = malloc(sizeof(char) * (len_name + 1));
		if (ptr_name == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < len_name; i++)
			ptr_name[i] = name[i];
		ptr_name[len_name] = '\0';
	ptr->name = ptr_name;
	}
	while (owner[len_owner] != '\0')
		len_owner++;
	if (owner != NULL)
	{
		ptr_owner = malloc(sizeof(char) * (len_owner + 1));
		if (ptr_owner == NULL)
		{
			free(ptr_name);
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < len_owner; i++)
			ptr_owner[i] = owner[i];
		ptr_owner[len_owner] = '\0';
	ptr->owner = ptr_owner;
	}
	ptr->age = age;
	return (ptr);
}
