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
int ldn;
char msg1[] = "Last digit of";
char msg2[] = "and is greater than 5";
char msg3[] = "less than 6 and not 0";
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
ldn = n % 10;
if (ldn > 5)
{
printf("%s %i %s %i %s\n", msg1, n, "is", ldn, msg2);
}
else if (ldn == 0)
{
printf("%s %i %s %i %s", msg1, n, "is", ldn, "and is 0\n");
}
else
{
printf("%s %i %s %i %s\n", msg1, n, "is", ldn, msg3);
}
return (0);
}
