#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - X to the power of Y
 * @x: x
 * @y: to the power of y
 * Return: the answer
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
