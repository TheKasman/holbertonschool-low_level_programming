#include "dog.h"

/**
 * print_dog - prints the attributes of le doggo
 * @d: the dog object
 * Return: it's void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
}
