#include "main.h"

/**
* _strlen - Function that finds the lenght of a string.
*
* @s: The sting to be evaluated
*
* Return: the length of s
*/
int _strlen(char *s)
{	int i, m;
	m = 0;
	for (i = 0 ; s[i] != 0 ; i++)
		m++;

	return (m);
}
