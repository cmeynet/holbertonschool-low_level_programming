#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts
 * a new node at a given position
 * @h: a pointer to a pointer of type list_t
 * @idx: index of the node where the node shoulb be added
 * @n: number to be added at the new node
 *
 * Return: the address of the new node
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	size_t count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	current = *h;
	while (current != NULL)
	{
		if ((idx - 1) == count)
		{
			new->n = n;
			new->next = current->next;
			new->prev = current;
			if (current->next != NULL)
				current->next->prev = new;

			current->next = new;
			return (new);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
