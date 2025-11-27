#include "lists.h"

/**
 * add_node_end - adds a node to the linked list
 * @head: the head of the linked list
 * @str: the string?
 * Return: returns the list!
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*step 0 - variable listing, the node and a temp location*/
	dlistint_t *node, *temp;

	/*step 1 - assign memory using malloc, check memory is OK*/
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);


	/*step 2 - assign basics, value and pointer to next*/
	node->n = n;
	node->next = NULL;

	/*step 3 - empty list use case, assign previous to null and the head*/
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	/*step 4 - We have stuff, walk to the last node*/
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/*step 5 - stitch the nodes together*/
	temp->next = node;
	node->prev = temp; /*temp is the head, the previous node*/


	return (node);
}
