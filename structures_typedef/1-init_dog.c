#include "dog.h"

/**
 * init_dog - initalises the dog object
 * @d: the structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the doggo
 * Return: it's void, no return!
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
