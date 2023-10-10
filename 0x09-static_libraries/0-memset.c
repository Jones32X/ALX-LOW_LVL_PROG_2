#include "main.h"

/**
 * _memset - fills memory block with value
 * @s: starting memory area to be filled
 * @b: desired char to copy
 * @n: number of times to change bytes
 * Return: change the array with new values
 * for every n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int u;

	for (u = 0; n > 0; u++)
	{
		s[u] = b;
		n--;
	}

	return (s);
}
