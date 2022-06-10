/**
 * _isdigit -  a function that checks for a digit.
 *
 * @c: contains value to be checked
 *
 * Description: checks for a digit using the ASCII value.
 *
 * Return: 1 if is digit otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
