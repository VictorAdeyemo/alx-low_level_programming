#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments to be processed
 *
 *
 * Return: returns the sum of the inputed parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list list;

	va_start(list, n);

	unsigned int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
