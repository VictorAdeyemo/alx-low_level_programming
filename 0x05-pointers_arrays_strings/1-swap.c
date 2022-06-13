#include "main.h"

/**
*swap_int - Swap the values of two integers
*@a: First parameter
*@b: Second parameter
*@m: Temporary pointer to hold the value of *a
*
*Return : nothing
*/
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;

}
