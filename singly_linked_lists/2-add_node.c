#include "lists.h"
/**
 * add_node - Function that adds a new node
 * at the beginning of a list_t list
 * @head: a pointer to a pointer of type list_t
 * It is used to add an element to the beginning of the list
 * @str: string to add
 *
 * Return: the adress of the new element
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	new->len = length;
	new->next = *head;
	*head = new;

	return (*head);
}
