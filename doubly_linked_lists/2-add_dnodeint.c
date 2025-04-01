#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: a pointer to a pointer of type list_t
 * @n: number to add in the new node
 *
 * Return: the adress of the new element
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	/*If list is not empty,the old first element must point back to the new node*/
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
