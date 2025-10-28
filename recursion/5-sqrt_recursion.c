#include <stdio.h>

/**
 * helpMe - square root helper
 * @n: the number to sqrt
 * @guess: the number i'm guessing
 * Return: the int that helps us try to find the sqrt
 */

int helpMe(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (helpMe(n, guess + 1));
}



/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: returns the number
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (helpMe(n, 0));
}
