#include "3-calc.h"

/**
 * *get_op_func - gets the operation function
 * @s: the symbol for the function
 * Return: returns the answer
 */

int (*get_op_func(char *s))(int, int)
{
	/*our array of calculations*/
	op_t ops[] =	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL) /*while the amount of objects in ops[]*/
	{
		if (*s == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
