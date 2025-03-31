#include "lists.h"
/**
 * print_list - Function that prints all the elements
 * of a list_t list
 * @h: pointer to an element of type list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count += 1;
		h = h->next;
	}

	return (count);
}
