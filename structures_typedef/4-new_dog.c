#include "dog.h"

/**
 * *new_dog - constructor for a dog object
 * @name: pupper name
 * @age: pupper age
 * @owner: pupper owner
 * Return: returns the doggo
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
		return (NULL);

	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	return (doggo);
}
