#include "main.h"

/**
 * _strlen_recursion -  returns length of string.
 * @s: string for measuring 
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
