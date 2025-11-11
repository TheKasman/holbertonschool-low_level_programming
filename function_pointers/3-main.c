#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main loop
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*funk)(int, int);

	/*Error checking*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	funk = get_op_func(argv[2]);

	if (funk == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = funk(a, b);
	/*PLEASE WORK....*/
	printf("%d\n", result);

	return (0);
}
