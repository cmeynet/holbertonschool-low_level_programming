#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum
 * of all the data of a dlistint_t linked list
 * @head: a pointer to an element of type dlistint_t
 *
 * Return: the sum of all data
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
