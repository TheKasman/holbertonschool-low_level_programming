#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: the name of the person
 * @f: the function we're using
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
