#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth
 * node of a dlistint_t linked list
 * @head: a pointer to an element of type dlistint_t
 * @index: index of the node
 *
 * Return: the value of the nth node
 * or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t count = 0;

	current = head;
	while (current != NULL)
	{
		if (index == count)
			return (current);

		current = current->next;
		count += 1;
	}
	return (NULL);
}
