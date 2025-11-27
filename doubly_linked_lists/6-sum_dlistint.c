#include "lists.h"

/**
 * sum_dlistint - sums up the value of the nodes together
 * @head: the list
 * Return: returns the sum
 */


int sum_dlistint(dlistint_t *head)
{
	int sum;
	/*this needs to be here or else we can't work with the list properly*/
	dlistint_t *node = head;

	/*loop through until the end of the list*/
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
