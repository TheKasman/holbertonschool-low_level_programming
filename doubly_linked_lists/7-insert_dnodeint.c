#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a node into a linked list at an index
 * @h: the list
 * @idx: the index where the node goes
 * @n: the value
 * Return: Returns the node/list back
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;

	dlistint_t *node, *current;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *h;

		if (*h != NULL)
			(*h)->prev = node;

		*h = node;
		return (node);
	}

	current = *h;

	for (i = 0; i < idx - 1 && current != NULL; ++i)
		current = current->next;

	if (current == NULL)
	{
		free(node);
		return (NULL);
	}

	node->prev = current;
	node->next = current->next;
	current->next = node;

	if (node->next != NULL)
		node->next->prev = node;

	return (node);
}
