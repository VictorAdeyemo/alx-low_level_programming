/**
 * _isdigit -  a function that checks for a digit.
 *
 * @c: contains value to be checked
 *
 * Description: checks for a digit.
 *
 * Return: 1 or 0 depending on the value of c.
 */

int _isdigit(int c)
{

	if (c >= 65 && c <= 90)

		return (1);

	else
		return (0);
}
