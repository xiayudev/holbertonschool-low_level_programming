#include "main.h"


/**
 * _abs - function
 * @n: The number to be tested
 * Computes the absolute value of an integer
 *
 * Return: The absolute value
 *
 */
int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = n * -1;
		return (abs);
	}
	return (n);
}
