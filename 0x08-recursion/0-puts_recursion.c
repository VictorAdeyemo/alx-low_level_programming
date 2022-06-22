#include "main.h"

/**
 * _puts_recursion - function prints a string followed by a new line.
 *
 *@s: the supplied string
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion((s + (i + 1)));
	_putchar('\0');
}
