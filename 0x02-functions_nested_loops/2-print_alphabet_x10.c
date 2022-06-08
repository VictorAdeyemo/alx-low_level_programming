#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
int alp;
int i;
int counter = 0;
while (counter < 10)
{
for (alp = "a" ; alp <= 'a' ; alp++)
{
_putchar(alp);
}
counter++;
putchar('\n');
}
}
