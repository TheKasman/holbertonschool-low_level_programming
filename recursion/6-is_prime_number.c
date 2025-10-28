#include <stdio.h>

/**
 * helpMe - square root helper
 * @n: the number to sqrt
 * @guess: the number i'm guessing
 * Return: the int that helps us try to find the sqrt
 */

int helpMe(int n, int guess)
{
	if (guess * guess > n)
		return (1); /*this is a prime number*/

	if (n % guess == 0)
	{
		return (0); /*found a divisor*/
	}

	return (helpMe(n, guess + 1));
}



/**
 * is_prime_number - checks to see if the number is a prime number
 * @n: the number
 * Return: 1 if yes, 0 if no.
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}


	return (helpMe(n, 2));
}
