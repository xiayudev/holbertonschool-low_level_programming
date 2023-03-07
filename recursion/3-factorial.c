#include "main.h"

/**
 * factorial - function
 * @n: The integer to be evaluated
 * Calculate the factorial of a number
 *
 * Return: Factorial
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
