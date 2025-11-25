#include "lists.h"

/**
 * dlistint_len - lists the amount of things in this linked list
 * @h: the linked list
 * Return: returns the count of nodes in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
