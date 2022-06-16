#include "main.h"
/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)

{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}
	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}

	for (j = 0; dest[j] != '\0'; ++j)
	{
		return (dest[j]);
	}

}
