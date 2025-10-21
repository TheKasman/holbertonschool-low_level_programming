#include <stdio.h>
#include "main.h"

void fizzBuzz(void);

/**
 * fizzBuzz - IT'S FIZZBUZZ TIME BABYYYY
 * Return: void
 */

void fizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}


		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}

		/*print out numbers (FOR LOOP)*/
		else
		{
			printf("%d ", i);
		}
	}
}

int main(void)
{
	fizzBuzz();
	return (0);
}
