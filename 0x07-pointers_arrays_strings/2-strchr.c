#include "main.h"

/**
 * _strchr - This function locates a character in a string
 * @s: The string given
 * @c: The character to be located
 *
 * Return: Always o.
 *
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++
	for (b = 0 ; b < a ; b++)
	{
		if (c == s[b])
			s += b;
			return (s);
	}
	return ('\0');
}
