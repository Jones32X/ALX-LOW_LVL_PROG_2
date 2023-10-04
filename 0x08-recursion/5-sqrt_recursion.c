#include "main.h"

int actutal_sqrt_recusrsion(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number for calculating square root
 * Retun: result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actutal_sqrt_recusrsion(n, 0));
}
/**
 * actutal_sqrt_recusrsion - finds the natural square root of number
 * @n: number to calculate square root
 * @i: iterating value
 * Return: square root result
 */

int actutal_sqrt_recusrsion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actutal_sqrt_recusrsion(n, i + 1));
}
