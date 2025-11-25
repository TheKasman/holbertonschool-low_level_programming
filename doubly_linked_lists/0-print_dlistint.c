#include "lists.h"

/**
 * print_dlistint - prints the doubly linked list
 * @h: the linked list
 * Return: returns the count of the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
