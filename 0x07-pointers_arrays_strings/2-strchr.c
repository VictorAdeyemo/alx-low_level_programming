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
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
		else
		{
		return (NULL);
		}

	}
}
