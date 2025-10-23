#include <stdio.h>
#include "main.h"

int _strlen(char *s);

/**
 * _strlen - returns the length of a string
 * @s: the string to find the length of
 * Return: Returns an int
 */


int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}
