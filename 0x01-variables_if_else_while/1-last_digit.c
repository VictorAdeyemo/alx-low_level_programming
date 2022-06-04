#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int ldn = n % 10;
if (ldn > 5)
{
printf("%s %i %s %i %s", "Last digit of", n, "is", ldn, "and is greater than 5\n");
}
else if (ldn == 0)
{
printf("%s %i %s %i %s", "Last digit of", n, "is", ldn, "and is 0\n");
}
else
{
printf("%s %i %s %i %s", "Last digit of", n, "is", ldn, "and is less than 6 and not 0\n");
}
return (0);
}
