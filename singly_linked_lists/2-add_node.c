#include "lists.h"

/**
 * add_node - adds a node to the linked list
 * @head: the head of the linked list
 * @str: the string?
 * Return: returns the list!
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (nchar = 0; str[nchar]; nchar++)
	{
		new->len = nchar;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
