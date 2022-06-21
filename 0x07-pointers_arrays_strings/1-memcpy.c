#include "main.h"

/**
 * _memcpy - Memory copy
 * @dest: Memory destination
 * @src: Memory source
 * @n: number of bytes to be copied
 *
 * Return: Return
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];

	return (dest);
}
