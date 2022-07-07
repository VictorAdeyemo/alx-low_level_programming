#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @size: the size of the array
 * @action: pointer to the function to be executed
 * @array: the given array
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
