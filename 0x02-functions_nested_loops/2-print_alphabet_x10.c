#include "main.h"

/**
 * print_alphabet_x10 - This function prints 10 times the alphabet
 *
 * Description: a function that prints 10 times the lowercase alphabet
 *
 * Return: Always 0 (Success).
 */

void print_alphabet_x10(void)
{
	int alpha; 
	int icount;


	icount = 0;

	while (icount < 10)
	{
		for (alpha = 'a' ; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		icount++;

		_putchar('\n');
	}

}
