#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * character - function
 * @ptr: The list of arguments passed
 *
 * Prints character
 *
 * Return: Void
 *
 */
void character(va_list ptr, int i)
{
	if (i == 0)
		printf("%c", va_arg(ptr, int));
	else
		printf(", %c", va_arg(ptr, int));
}

/**
 * integer - function
 * @ptr: The list of arguments passed
 *
 * Prints integer
 *
 * Return: Void
 *
 */
void integer(va_list ptr, int i)
{
	if (i == 0)
		printf("%d", va_arg(ptr, int));
	else
		printf(", %d", va_arg(ptr, int));
}

/**
 * floating - function
 * @ptr: The list of arguments passed
 *
 * Prints a floating
 *
 * Return: Void
 *
 */
void floating(va_list ptr, int i)
{
	if (i == 0)
		printf("%f", va_arg(ptr, double));
	else
		printf(", %f", va_arg(ptr, double));
}

/**
 * string - function
 * @ptr: The list of arguments passed
 *
 * Prints strings
 *
 * Return: Void
 *
 */
void string(va_list ptr, int i)
{
	char *s;

	s = va_arg(ptr, char*);
	if (s)
	{
		if (i == 0)
			printf("%s", s);
		else
			printf(", %s", s);
	}
	else
	{
		if (i == 0)
			printf("%p", NULL);
		else
			printf(", %p", NULL);
	}
}

/**
 * print_all - function
 * @format: The format specifier (float,int,etc)
 *
 * Prints anything
 *
 * Return: Void
 *
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ptr;
	op_t ops[] = {
		{"c", character},
		{"i", integer},
		{"f", floating},
		{"s", string},
		{NULL, NULL}
	};

	va_start(ptr, format);
	i = 0;
	while (*(format + i))
	{
		if (*(format + i) != 'c'
				&& *(format + i) != 'i'
				&& *(format + i) != 'f'
				&& *(format + i) != 's')
		{
			i++;
			continue;
		}
		j = 0;
		while ((ops + j))
		{
			if (*((ops + j)->c) == *(format + i))
			{
				(ops + j)->f(ptr, i);
				break;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	va_end(ptr);
}
