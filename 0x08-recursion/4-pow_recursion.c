#include "main.h"

/**
 * _pow_recursion - this function returns the square of a number
 * @x: The number to be squared
 * @y: The number of square
 *
 * Return: Returns the sqaure of x to power y.
 */

int _pow_recursion(int x, int y)
{
	--y;

	if (y < 0)
	{
		return (-1);
	}

	if (y > 0)
	{
		return (x * (_pow_recursion(x, y)));
	}
}
