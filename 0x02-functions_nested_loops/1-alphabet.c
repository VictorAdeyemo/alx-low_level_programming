#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{

	char alphabet;

        for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
        {
                _putchar(alphabet);

        }

        _putchar('\n');
}
