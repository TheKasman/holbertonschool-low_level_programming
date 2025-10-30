#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks to see if the number in argv is signed and a number
 * @s: the number in argv
 * Return: Returns 1 if not a number. 0 if a number
 */

int is_number(const char *s)
{
	if (*s == '-' || *s == '+')
		s++;
	if (!*s)
		return (0);

	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * main - multiplies two numbers together
 * @argc: Argument commands
 * @argv: Argument vector.. of commands
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; argv[i]; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
