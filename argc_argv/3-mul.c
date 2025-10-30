#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers together
 * @argc: Argument commands
 * @argv: Argument vector.. of commands
 * Return: 0 on success, 1 on error
 */


int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
