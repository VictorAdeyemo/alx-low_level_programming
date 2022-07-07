#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers passed as arguments
 * @n: number supplied
 * @separator: separator printed in between the numbers
 *
 * Return: nothing.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%u", va_arg(list, int));
			printf("%c", separator);
		}
	}
	va_end(list);
	return (0);
}
