#include "lists.h"

/**
 * add_dnodeint - adds a node to the doubly linked list
 * @head: the head of the linked list
 * @n:value to be added to the node
 * Return: Returns the list
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node;

	new_Node = malloc(sizeof(dlistint_t));

	if (new_Node == NULL)
	{
		return (NULL);
	}

	new_Node->n = n;
	new_Node->next = *head;
	new_Node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_Node;

	*head = new_Node;

	return (*head);
}
