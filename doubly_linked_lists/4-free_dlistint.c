#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head: the list
 */

void free_dlistint(dlistint_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
