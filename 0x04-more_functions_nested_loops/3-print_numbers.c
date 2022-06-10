#include "main.h"

/**
 * print_numbers - Prints 0 to 9
 *
 * Return: The numbers 0 - 9
 */
void print_numbers(void)
{
char n = 0;

while (n <= 9)
{
_putchar('0' + n);
n++;

}
_putchar('\n');
}
