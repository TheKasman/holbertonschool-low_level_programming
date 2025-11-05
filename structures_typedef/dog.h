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
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
