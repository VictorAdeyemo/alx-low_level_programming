#include "main.h"

/**
 *  print_last_digit - Function prints the last digit of a number
 *
 *  @n: The number to be evaluated
 *
 *  Return: Return the last digit of the number
 *
 */

int print_last_digit(int n)
{
int ld;
if (n < 0)
{
ld = (-1 * (n % 10));
return (ld);
}
else
{
ld = n % 10;
return (ld);
}
}
