#include "main.h"
/**
 * _puts - print to stdout
 *
 * @str: parameter supplied
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
