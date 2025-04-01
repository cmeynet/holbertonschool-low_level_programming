#include "lists.h"
/**
 * add_node_end - Function that adds a new node
 * at the end of a list_t list
 * @head: a pointer to a pointer of type list_t
 * @str: string to add
 *
 * Return: the adress of the new element
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;
	size_t length = 0;

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
		length++;

	new->len = length;

	tail = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* Browse the list until reaching the last node */
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	return (new);
}
