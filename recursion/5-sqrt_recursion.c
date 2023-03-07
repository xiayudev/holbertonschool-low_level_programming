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
	int j, square;

	j = 1;
	square = i * i;
	if (n < 0)
		return (-1);
	if (square > n)
		return (-i);
	if (i * i == n)
		return (1);
	else if (i * i < n)
		return (j + recursion(n, i + 1));
	return (0);
}

/**
 * _sqrt_recursion - function
 * @n: The integer to be evaluated
 * Calculate square root
 *
 * Return: Square root
 *
 */
int _sqrt_recursion(int n)
{
	int i, r;

	i = 1;
	r = recursion(n, i);
	return (r);
}
