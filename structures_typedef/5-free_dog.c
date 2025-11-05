#include "dog.h"

/**
 * free_dog - frees doggoes!
 * @d: the dog object
 * Return: it's void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
