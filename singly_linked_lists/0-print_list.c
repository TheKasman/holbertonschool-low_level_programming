#include "lists.h"

/** print_list - prints the list
 * @h: the list
 * Return: Returns the list..?
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}

	printf("[%u] %s", h->len, h->str);
	return (count);
}
