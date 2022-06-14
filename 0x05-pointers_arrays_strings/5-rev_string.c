#include "main.h"

/**
 *
 * print_rev - prints a given string in reverse order
 *
 * @s: The given string
 *
 *
 */

void rev_string(char *s)
{
	int j = 0;
	int i;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = j-1 ; i >= 0 ; i++)
	{
		return (s[i]);
	}
}
