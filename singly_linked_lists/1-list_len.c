#include "lists.h"
/**
 * list_len - Function that  returns the number
 * of elements in a linked list_t list
 * @h: pointer to an element of type list_t
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number += 1;
	}
	return (number);
}
