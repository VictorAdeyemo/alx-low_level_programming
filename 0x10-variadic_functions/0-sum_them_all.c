#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments to be processed
 *
 *
 * Return: returns the sum of the inputed parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
