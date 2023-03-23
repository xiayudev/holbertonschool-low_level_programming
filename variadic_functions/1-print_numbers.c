#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function
 * @separator: The string separator
 * @n: The number of aruments passed
 *
 * Prints numbers
 *
 * Return: Void
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	i = 0;
	while (i < n)
	{
		if (!separator)
			printf("%d", va_arg(ptr, int));
		else
		{
			if (i != 0)
				printf("%s%d", separator, va_arg(ptr, int));
			else
				printf("%d", va_arg(ptr, int));
		}
		i++;
	}
	putchar(10);
}
