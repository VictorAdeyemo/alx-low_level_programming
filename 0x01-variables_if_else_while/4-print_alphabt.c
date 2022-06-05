#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char i = 'a';
printf("\n\nLower case characters:\n");
while (i <= 'z')
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
