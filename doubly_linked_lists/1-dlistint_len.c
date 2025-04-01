#include "lists.h"
/**
 * dlistint_len - Function that  returns the number
 * of elements in a linked dlistint_t list
 * @h: pointer to an element of type list_t
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
