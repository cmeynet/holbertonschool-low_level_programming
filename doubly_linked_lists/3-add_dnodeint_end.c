#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node
 * at the end of a dlistint_t list
 * @head: a pointer to a pointer of type list_t
 * @n: number to add in the new node
 *
 * Return: the adress of the new element
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL; /*As it is the last element, next is NULL*/

	/*If the list is empty, the new node becomes the head*/
	if (*head == NULL)
	{
		new->prev = NULL; /*No previous node because it is the first one*/
		*head = new;
		return (new);
	}

	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	/*Add the new node to the end*/
	tail->next = new; /*The old last node points to the new one*/
	new->prev = tail; /*The new node points to the old last one*/

	return (new);
}
