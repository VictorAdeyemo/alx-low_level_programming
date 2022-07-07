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
	unsigned int i;
	char *s;
	va_list list;

	if (separator == NULL)
		separator = "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);

		if (s == NULL)
		{
			s = "(nil)";
		}

		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
