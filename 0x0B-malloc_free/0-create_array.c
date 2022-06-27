#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char*)malloc(size * sizeof(char));
	for (i = 0; i < size ; i++)
	{
		ptr[i] = 'c';
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
}
