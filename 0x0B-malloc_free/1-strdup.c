#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: the string inputted
 *
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j <= i ; j++)
		{
			ptr[j] = str[j];
		}
		return (ptr);
	}
}
