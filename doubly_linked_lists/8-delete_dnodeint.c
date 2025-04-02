#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes
 * the node at index of a dlistint_t linked list
 * @head: a pointer to a pointer of type list_t
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	size_t count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		/*Update the head to point to the second node*/
		*head = current->next;
		current->prev = NULL;
	}

	while (current != NULL)
	{
		if (index == count)
		{
			if (current->prev != NULL)
				/*Changes the next pointer of the previous node to skip the current node*/
				current->prev->next = current->next;
			if (current->next != NULL)
				/*Changes the prev pointer of the next node to point to the previous node*/
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
