#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements
 * of a dlistint_t list
 * @h: pointer to an element of type list_t
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}

	return (count);
}
