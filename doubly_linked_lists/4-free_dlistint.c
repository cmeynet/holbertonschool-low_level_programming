#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint_t list
 * @head: a pointer to an element of type dlistint_t
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
