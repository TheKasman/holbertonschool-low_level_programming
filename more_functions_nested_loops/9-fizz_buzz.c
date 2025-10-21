#include <stdio.h>
#include "main.h"

void fizzBuzz(void);

/**
 * fizzBuzz - Prints numbers from 1-100, changing to Fizz, buzz, or FizzBuzz
 *
 * Return: void
 */

void fizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

		/*print out numbers (FOR LOOP)*/
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
}

/**
 * main - executes fizzBuzz
 * Return: Always 0 (success)
 */

int main(void)
{
	fizzBuzz();
	return (0);
}
