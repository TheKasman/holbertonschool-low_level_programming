#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - the doggo struct
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo's handler
 * Description: A struct to make a doggo!
 * Typedef: dog_t is an alias for the struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
