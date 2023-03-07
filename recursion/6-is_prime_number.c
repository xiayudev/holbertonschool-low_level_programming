#include "main.h"

/**
 * recursion - function
 * @n: The integer to be evaluated
 * @i: The iterator
 * Calculate square root
 *
 * Return: Square root
 *
 */
int recursion(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		return (recursion(n, i + 1));
	}
	else if (i > n)
		return (0);
	return (1);
}

/**
 * is_prime_number - function
 * @n: The integer to be evaluated
 * Calculate if n is prime
 *
 * Return: 1 if n is prime, 0 otherwise
 *
 */
int is_prime_number(int n)
{
	int i, r;

	i = 2;
	r = recursion(n, i);
	return (r);
}
