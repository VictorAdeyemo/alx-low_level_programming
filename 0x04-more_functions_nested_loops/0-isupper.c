/**
 * _isupper -  a function that checks for lowercase character.
 *
 * @c: contains value to be checked
 *
 * Description: checks for uppercase character.
 *
 * Return: Always 0 (Success).
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)

		return (1);

	else
		return (0);
}
