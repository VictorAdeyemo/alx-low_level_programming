#include "main.h"

/**
 * factorial - This function
 * @n: The parameter to be manipulated
 *
 * Return: Return the factorial of the integer
 *
 */

int factorial(int n)
{

	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
		return (n * factorial(n - 1));
}
