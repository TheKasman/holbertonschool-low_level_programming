#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * *_calloc - CALLOC THESE
 * @nmemb:amonut of elements
 * @size: amount of bytes each element is
 * Return: returns the void pointer back from the void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*If malloc fails, then _calloc returns NULL*/
	unsigned int print_nmemb;
	void *memory;
	char *zerome;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*print garbage*/
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	/*cast void* as char* */
	zerome = memory;

	/*print zeroed values in garbage*/
	for (print_nmemb = 0; print_nmemb < nmemb * size; print_nmemb++)
	{
		zerome[print_nmemb] = 0;
	}
	return (memory);
}
