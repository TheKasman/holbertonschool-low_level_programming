#include "lists.h"

/**
 * *get_dnodeint_at_index - gets the node at the index
 * @head: the head
 * index: the index we're looking for
 * Return: Returns the value from the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*It's probably going to be a for loop using the index as a close*/
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		/*if the node doesn't exist, break out*/
		if (head == NULL)
			return (NULL);

		/*go through each node to get to the right one*/
		head = head->next;
	}
	return (head);
}
