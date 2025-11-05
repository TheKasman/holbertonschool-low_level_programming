#include "dog.h"

/**
 * print_dog - prints the attributes of le doggo
 * @d: the dog object
 * Return: it's void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
