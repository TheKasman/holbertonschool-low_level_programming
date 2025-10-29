#include <stdio.h>

/**
 * main - prints out the arguments in argv[]
 * @argc: the stuff in argv
 * @argv: the vector of argc
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
