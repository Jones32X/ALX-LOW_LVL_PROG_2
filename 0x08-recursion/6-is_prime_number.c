#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: number for checking
 * Return: 1 if n is prime num else return 0 if not
 * prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)

		return (0);

	return (actual_prime(n, n - 1));
}

/**
 *
 * actual_prime - checks if number is a recusrive prime number
 * @n: number to be tested
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime(n, i - 1));
}
