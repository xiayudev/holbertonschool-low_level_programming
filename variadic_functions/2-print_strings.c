#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function
 * @separator: The string separator
 * @n: The number of aruments passed
 *
 * Prints strings
 *
 * Return: Void
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *p_temp;

	va_start(ptr, n);

	i = 0;
	while (i < n)
	{
		p_temp = va_arg(ptr, char*);
		if (!separator)
		{
			if (!p_temp)
				printf("%p", NULL);
			else
				printf("%s", p_temp);
		}
		else
		{
			if (p_temp)
			{
				if (i == 0)
					printf("%s", p_temp);
				else
					printf("%s%s", separator, p_temp);
			}
			else
				if (i == 0)
					printf("%p", p_temp);
				else
					printf("%s%p",separator, NULL);
		}
		i++;
	}
	putchar(10);
	va_end(ptr);
}
