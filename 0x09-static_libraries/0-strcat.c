#include "main.h"

/**
 * _strcat - function  concatenates two strings
 * @dest: input vale
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int p;
	int m;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[p] = src[m];
		p++;
		m++;
	}

	dest[p] = '\0';
	return (dest);
}
