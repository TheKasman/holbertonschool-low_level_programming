#include "lists.h"

/**
 * free_list - Frees the linked list
 * @head: the linked list
 */


void free_list(list_t *head)
{
	list_t *tmp;

	while (!head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
