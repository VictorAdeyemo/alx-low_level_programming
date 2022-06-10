/**
 * print_numbers -  a function that print 0 to 9.
 *
 * @n: counter starting point
 *
 * Description: Prints numbers 0 - 9.
 *
 * Return: Always 0 (Success).
 */

void print_numbers(void)
{
int n = 0;

	do {
		_putchar(n);
		n = n + 1;
}
	while (n < 10);

	return (0);
	_putchar('\n')
}
