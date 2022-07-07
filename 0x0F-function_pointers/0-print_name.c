#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: pointer to function that returns void
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	unsigned int i = 0;

	if (f == NULL || name == NULL)
	{
		return;
	}
	
	f(name);	
}
