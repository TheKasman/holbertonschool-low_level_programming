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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
