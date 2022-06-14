#include "main.h"

/**
 * puts2 - Prints every other number.
 *
 * @str: The string to be manipulate.
 *
 */

void puts2(char *str)
{
	int x, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (x = 0 ; x <= j - 1 ; x += 2)
	{
		_putchar(str[x]);
	}
		_putchar("\n");
}
