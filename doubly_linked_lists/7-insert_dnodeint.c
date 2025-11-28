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

	/*node creation*/
	dlistint_t *node, *current;

	node = add_dnodeint(h, n);

	/*our head check*/
	if (idx == 0)
	{
		node->next = *h;

		if (*h != NULL)
			(*h)->prev = node;

		*h = node;
		return (node);
	}

	/*our temp value*/
	current = *h;

	/*find the previous node before the insertion point*/
	for (i = 0; i < idx - 1 && current != NULL; ++i)
		current = current->next;

	/*idx is out of bounds*/
	if (current == NULL)
	{
		free(node);
		return (NULL);
	}

	/*node stitching*/
	node->prev = current;
	node->next = current->next;
	current->next = node;

	if (node->next != NULL)
		node->next->prev = node;

	return (node);
}
