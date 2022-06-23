#include "main.h"

/**
 * _print_rev_recursion - function prints a string in reverse.
 *
 *@s: the supplied string
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s < *(s + 1))
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s - 1));
	s--;
	_print_rev_recursion(s);
}
