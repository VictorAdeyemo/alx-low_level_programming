#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * create_array - create an array and initializes with a specific char
 * @size: the size of the array
 * @c: the character for initialization
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *)malloc(size * sizeof(char));
		for (i = 0; i < size ; i++)
		{
			ptr[i] = c;
		}
	}


	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
		free(ptr);
	}
}
