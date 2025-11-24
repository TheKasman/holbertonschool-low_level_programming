#include "lists.h"

/**
 * list_len - Lists the length
 * @h: The list
 * Return: Returns the count
 */

size_t list_len(const list_t *h)
{
	unsigned int count;

	if (h == NULL)
	{

	}

	while (h->len != NULL)
	{
		h = h->next;
	}
	return (count)
}
