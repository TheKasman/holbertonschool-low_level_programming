#include <stdio.h>

/**
 * main - prints out the arguments in argv[]
 * @argc: the stuff in argv
 * @argv: the vector of argc
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
