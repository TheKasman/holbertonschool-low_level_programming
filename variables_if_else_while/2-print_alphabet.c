#include <stdio.h>

/**
 * main - Main loop to do the task
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < alphabet['\0']; i++)
	{
		putchar(alphabet[i]);
	}
	return (0);
}
