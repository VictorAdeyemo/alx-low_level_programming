#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 *@s: That is the string to be looped thougj
 * @accept: The chracters searched for in S
 *
 * Return: Returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
