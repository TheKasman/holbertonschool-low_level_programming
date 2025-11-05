#include "dog.h"

/**
 * *copy_string - copies the string
 * @src: the source string
 * Return: returns the string
 */

char *copy_string(char *src)
{
	int i;
	int len = 0;
	char *dest;

	while (src[len])
		len++;

	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}


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

	doggo->name = copy_string(name);
	if (!doggo->name)
	{
		free(doggo);
		return (NULL);
	}

	doggo->age = age;

	doggo->owner = copy_string(owner);

	if (!doggo->owner)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	return (doggo);
}
