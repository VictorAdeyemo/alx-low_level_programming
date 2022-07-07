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


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}

	va_end(list);
	printf("\n");
}
