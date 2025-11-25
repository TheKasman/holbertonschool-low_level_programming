#include "lists.h"

/**
 * add_node_end - adds a node to the linked list
 * @head: the head of the linked list
 * @str: the string?
 * Return: returns the list!
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = NULL;   /* <-- important for end insertion */

	/* CASE 1: list is empty */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* CASE 2: traverse until we reach last node */
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;   /* add to end */

	return (new);
}
