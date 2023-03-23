#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: The number of argument passed
 *
 * Sums all of the parameters
 *
 * Return: Sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	return (sum);
}
