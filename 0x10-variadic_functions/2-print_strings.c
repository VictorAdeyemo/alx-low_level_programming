#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: character to be printed inbetween strings
 * @n: the numbers of strings passed
 *
 * Return: return nothing
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (n == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", va_arg(list, char));
			if (i != n - 1 && separator)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(list);
	printf("\n");
}
