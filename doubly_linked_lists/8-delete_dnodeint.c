#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at the index
 * @head: the linked list
 * @index: the index
 * Return: most likely 0 on success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1); /*empty list*/

	node = *head;

	/*head deletion*/
	if (index == 0)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	/*standard deletion*/
	for (i = 0; i < index && node != NULL; i++)
		node = node->next;

	if (node == NULL)
		return (-1);

	/*unstitching*/
	if (node->prev != NULL)
		node->prev->next = node->next;

	if (node->next != NULL)
		node->next->prev = node->prev;

	free(node);
	return (1);
}
